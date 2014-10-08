#ifndef _lcd_h_
#define _lcd_h_
#include <xs1.h>

typedef enum {
    data16_port16,  //use all the bits of a 16 bit port
    data16_port32,  //use the lower 16 bits of a 32 bit port
} e_output_mode;

typedef struct {
  unsigned width;
  unsigned height;
  unsigned h_front_porch;
  unsigned h_back_porch;
  unsigned h_pulse_width;
  unsigned v_front_porch;
  unsigned v_back_porch;
  unsigned v_pulse_width;
  e_output_mode output_mode;
  unsigned clock_divider;
} lcd_config;

/**
 * The structure to represent LCD ports and configuration
 */
typedef struct lcd_ports {
  out buffered port:32 lcd_rgb;     /**< 16 bit data port */
  out port lcd_clk;                 /**< The clock line */
  out port ?lcd_data_enabled;        /**< The LCD data enabled */
  out buffered port:32 ?h_sync;      /**< The LCD horizontal sync */
  out port ?v_sync;                  /**< The LCD vertical sync */
  clock clk_lcd;                    /**< Clock block used for LCD clock */
} lcd_ports;

/** \brief The LCD server.
 *
 * \param c_client          The channel connecting to the client.
 * \param lcd_rgb           The parallel data port.
 * \param lcd_clk           The pixel clock.
 * \param lcd_data_enabled  The data enabled signal.
 * \param lcd_h_sync        The horizontal sync signal.
 * \param lcd_v_sync        The vertical sync signal.
 * \param lcd_cb            A clock block to manage the ports.
 * \param width             Width of the LCD screen in pixels.
 * \param height            Height of the LCD screen in pixels.
 * \param h_front_porch     Time of horizontal front porch in pixel clocks.
 * \param h_back_porch      Time of horizontal back porch in pixel clocks.
 * \param h_pulse_width     Time of horizontal pulse width in pixel clocks.
 * \param v_front_porch     Time of vertical front porch in horizontal times.
 * \param v_back_porch      Time of vertical back porch in horizontal times.
 * \param v_pulse_width     Time of vertical pulse width in horizontal times.
 * \param output_mode       The mode of writing line buffers to the data port.
 * \param clock_divider     The divider of the system clock to give the pixel clock.
 */
void lcd_server(streaming chanend c_client,
        out buffered port:32   lcd_rgb ,
        out port               lcd_clk,
        out port               ?lcd_data_enabled,
        out buffered port:32   ?lcd_h_sync,
        out port               ?lcd_v_sync,
        clock                  lcd_cb,
        const static unsigned width,
        const static unsigned height,
        const static unsigned h_front_porch,
        const static unsigned h_back_porch,
        const static unsigned h_pulse_width,
        const static unsigned v_front_porch,
        const static unsigned v_back_porch,
        const static unsigned v_pulse_width,
        const static e_output_mode output_mode,
        const static unsigned clock_divider
       );

/** \brief Initialises the LCD with the first line to be rendered. After this completes
 * there is a permenant real time requirement to update the LCD server with more data to render.
 *
 * \param c_lcd     The channel to the LCD server
 * \param buffer    This is a pointer to the data to be written to the LCD
 */
void lcd_init(streaming chanend c_lcd, unsigned * unsafe buffer);

/** \brief Passes a buffer to be rendered by the LCD
 *
 * \param c_lcd     The channel to the LCD server
 * \param buffer    This is a pointer to the data to be written to the LCD
 */
void lcd_update(streaming chanend c_lcd, unsigned * unsafe buffer);

/** \brief Returns the movable pointer from the LCD server to the client for reuse
 * This is a blocking call that may be used as a select handler.
 *
 * \param c_lcd     The channel to the LCD server
 * \param buffer    This returns the movable pointer from the LCD server
 */
#pragma select handler
void lcd_req(streaming chanend c_lcd);

#endif
