How to use the LCD library with LCD Demo
========================================

.. version:: 1.0.0

Summary
-------

This application note demonstrates how  use the lib_lcd library to write to an LCD screen via a parallel bus. The LCD library is used to drive a single graphics LCD module of upto 800 * 600 pixels with a maximum pixel clocks of 62.5MHz. This application note drives a 480 * 272 pixel LCD module with a pixel clock of 16.67MHz which is available with XA-SK-SCR480 sliceCARD.

Features
........

  - Standard component to support different LCD displays with an RGB interface.

  - Different color depths 32 bpp, 16 bpp, etc. based on user configuration.

  - Resolution of up to 800 * 600 pixels.

  - Configurability of LCD pixel dimensions, clock rate, horizontal and vertical timing requirements, port mapping of the LCD.

  - The function lcd_server requires just one core, the client functions, located in lcd.h are very low overhead and are called from the application.

Required tools and libraries
............................

* xTIMEcomposer Tools - Version >=14.0
* XMOS LCD library    - Version 3.0.0

Required hardware
.................

This application note is designed to run on an XMOS xCORE-Analogue sliceKIT. The application provided has been implemented and tested on the A16 sliceKIT (XP-SKC-A16 1V0) with a LCD sliceCARD(XA-SK-SCR480 1V0). This application can be modified to work on any XMOS XCORE device as long as the control signals can be connected to any of the one bit ports on the device provided they do not overlap with any other used
ports and are all on the same tile. 

Prerequisites
.............

  - This document assumes familiarity with the XMOS xCORE
    architecture, LCD basics, the XMOS tool chain and the xC language. Documentation related to these aspects which are not
    specific  to this application note are linked to in the references appendix.

  - For descriptions of XMOS related terms found in this document
    please see the XMOS Glossary [#]_.

  - For the full API listing of the XMOS LCD Library please see
    the library user guide [#]_.

  - For the datasheet of the LCD module attached with the LCD sliceCARD, KENTEC K430WQA-V4-F [#]_.

  .. [#] http://www.xmos.com/published/glossary

  .. [#] http://www.xmos.com/support/libraries/lib_lcd

  .. [#] http://www.kentec.com.hk/images/UploadFile/20111115190908-6.pdf


