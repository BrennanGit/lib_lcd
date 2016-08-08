// Copyright (c) 2014-2016, XMOS Ltd, All rights reserved
#ifndef SPRITE_H_
#define SPRITE_H_
#define SPRITE_WIDTH_PX  64
#define SPRITE_HEIGHT_PX 64

#define BACK_COLOUR (0xffffffff)
#define SPRITE_WIDTH_WORDS  (SPRITE_WIDTH_PX/2)
unsigned logo[SPRITE_WIDTH_WORDS * SPRITE_HEIGHT_PX] = { 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xee83f79a,
		0xee81f681, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xf7baffff, 0xee81ee81, 0xee81f681, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xee81f776, 0xf661f682, 0xee81ee81, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xf6ecef31, 0xee81eea7,
		0xee60ee40, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xef32f7bc, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xe7df4f7b, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffff, 0x477a975b,
		0x477a477a, 0x477a477a, 0x477a477a, 0x3f7a477a, 0x377a3f7a, 0xcfde377a,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x0f591759, 0xffffaf9d,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xef5dffff, 0x1f59e71c, 0x07590759, 0x07590759, 0x07590759, 0x07590759,
		0x07590759, 0xffff5f9b, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0x07591759, 0x475a0738, 0xffffefff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xe71cf79e, 0xcf3ce71c, 0x07590f39, 0x07590759,
		0x07590759, 0x07590759, 0x375a0759, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0x07381f59, 0x07590739, 0xafbd0f39, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffff, 0xe71ce71c, 0xe71ce71c,
		0x0738973b, 0x07390759, 0x07390739, 0x07390739, 0xdfde0758, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x07382759, 0x07380738,
		0x0f380738, 0xffff7f9c, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xe71cffff,
		0xe71ce71c, 0xe71ce71c, 0x673aef1c, 0x07580738, 0x07380758, 0x07380738,
		0xffffb7dd, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0x07382759, 0x07380758, 0xafbd0738, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xe71ce73c, 0xe71ce71c, 0xe71ce71c, 0xdf1be71c, 0x07581f38,
		0x07380758, 0x577a0738, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0x07382f59, 0x3f5a0738, 0xffffdfde, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xef7dffff, 0xe71cdefb, 0xe71ce71c, 0xe71ce71c,
		0xe71bdf1c, 0x0f38d71b, 0x07380738, 0xffff2f59, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x0f382f59, 0xffff779b,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xdefbf7be, 0xdefbdefb,
		0xdefbdefb, 0xdefbdefb, 0xdefbdefb, 0x9f1adefb, 0x07370738, 0xffffd7de,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xdfdf4f5a, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xdefcdefc, 0xdefcdefc, 0xdefcdefc, 0xdefcdefc, 0xdefcdefc, 0xe6fcdefc,
		0xb7bd6f1a, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xe6879ef5, 0xee85f665, 0xee65ee65, 0xee65ee65, 0xee45ee65,
		0xee44ee44, 0xf712ee43, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0x9f39ffff, 0xe604f604, 0xee04ee04, 0xee04ee04, 0xee04ee04,
		0xee04ee04, 0xee03ee04, 0xffffe6af, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xf7beffff, 0x175acf3b, 0xe6428eac, 0xee41ee41,
		0xee21ee21, 0xee21ee21, 0xee01ee01, 0xe5e0ee01, 0xffffffbc, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0x5f1affdf, 0xede06eae, 0xede0ede0,
		0xede0ede0, 0xede0ede0, 0xede1ede0, 0xee24ede0, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xef7dffff, 0xa73be71c,
		0x0f390758, 0xf6409eab, 0xee21ee22, 0xee21ee21, 0xee21ee21, 0xee01ee01,
		0xffffee89, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x6f19defb,
		0xc5e40717, 0xedc0ede0, 0xedc0edc0, 0xedc0edc0, 0xede0edc0, 0xf778eda0,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xe73cffff, 0xe73ce71c, 0x07595f3a, 0x27370759, 0xf62096ac, 0xee21ee21,
		0xee01ee21, 0xee00ee01, 0xf779ede0, 0xffffffff, 0xffffffff, 0xffffffff,
		0xf79effff, 0x6ef9dedb, 0x17160717, 0xe5c0dde2, 0xe5c0e5c0, 0xe5c0e5c0,
		0xe5c0e5c0, 0xffffeef2, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xe71cffdf, 0xe71ce71c, 0x1f59df3c, 0x07590759,
		0x2f350759, 0xee21ae89, 0xee21ee01, 0xede1ee01, 0xede2ee00, 0xffffffde,
		0xffffffff, 0xffffffff, 0xdedbffff, 0x6ef8dedb, 0x07170717, 0xf5a056b0,
		0xedc0edc0, 0xedc0edc0, 0xe605edc0, 0xffffffdf, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xe73cef5d, 0xe73ce73c,
		0xc73ce73c, 0x07590f59, 0x07390759, 0x2f360759, 0xee21c645, 0xee01ee00,
		0xede1ede0, 0xfffff712, 0xffffffff, 0xffffffff, 0xdedbe73c, 0x6ef8dedb,
		0x07170716, 0x8e2a0717, 0xe5a0eda0, 0xedc0e5a0, 0xffdde5a1, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xe73ce73c, 0xe73ce73c, 0xef3ce73c, 0x07596f5a, 0x07590759, 0x07390759,
		0x36f40738, 0xf5e0d625, 0xe5e1e5e1, 0xf7bce5c0, 0xffffffff, 0xffdfffff,
		0xdedbdedb, 0x6ef8dedb, 0x07160716, 0x17150716, 0xe5a0d5a2, 0xeda0e5a0,
		0xfffff6f3, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffdfffff, 0xe73ce73c, 0xe73ce73c, 0xe73ce73c, 0x3f59ef3c,
		0x07590759, 0x07380759, 0x07380758, 0x56d10739, 0xf5e0c625, 0xee49edc0,
		0xffffffdf, 0xdedbffff, 0xdedbd6ba, 0x6ed8deda, 0x07160716, 0x07160716,
		0xe5a126f3, 0xe629e580, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xf79effff, 0xe73ce73c, 0xe73ce73c,
		0xe73ce73c, 0xc73ce73c, 0x07590759, 0x07380759, 0x07380738, 0x07370737,
		0x66900738, 0xeda0d603, 0xfffff779, 0xd6baf79e, 0xd6bad6ba, 0x7ed8deba,
		0x06f606f5, 0x06f606f6, 0x6e4c06f6, 0xf7deeda2, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xe73cffff,
		0xe73ce73c, 0xe73ce73c, 0xe73ce73c, 0xe73ce73c, 0x0759af3b, 0x07590759,
		0x07380758, 0x07370738, 0x07370737, 0x5eaf0717, 0xf7dde5a2, 0xd6bad6ba,
		0xd6bad6ba, 0x7ed8deba, 0x06f60715, 0x071606f6, 0x06f506f6, 0xffffe759,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xf7beffff, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0x4f7af7be, 0x07590759, 0x07380758, 0x07370738, 0x07170737, 0x07170716,
		0x86d71715, 0xd6badebb, 0xd6bad6ba, 0x7ed8d6ba, 0x06f506f5, 0x06f506f5,
		0x6f5906f5, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0x07591f59, 0x07380738, 0x07370738,
		0x07170737, 0x07160716, 0x07160716, 0xd6ba9ed9, 0xd6bad6ba, 0x7ed8d6ba,
		0x06f506f5, 0x06f506f5, 0xf7ff1f16, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x0739bfbd,
		0x07380758, 0x07170737, 0x07160737, 0x07160716, 0x06f60716, 0xd6ba16f6,
		0xd69ad69a, 0x86b8d69a, 0x06f506f4, 0x0ef506f5, 0xffffdfde, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0x879cffff, 0x07380738, 0x07170737, 0x07160737, 0x07160716,
		0x06f506f6, 0x2ed60715, 0xd69ade9a, 0x86b8d69a, 0x06f406f4, 0x877a06f4,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x07382f59, 0x07170737,
		0x07160717, 0x06f60716, 0x06f506f6, 0x06f406f5, 0xde9a76b7, 0x86b8d699,
		0x06f406f4, 0xffff4f17, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0x0737dfdf, 0x07370717, 0x07160717, 0x06f60716, 0x06f506f5, 0x06f406f5,
		0xae9806f4, 0x8e98ce99, 0x06d406d4, 0xffffe7de, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0x979cffff, 0x07170737, 0x07160716, 0x06f60716,
		0x06f506f5, 0x06f406f4, 0x16d406f4, 0x8e97ce99, 0xc7bd06d4, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x07174739,
		0x07160716, 0x06f506f6, 0x06f406f5, 0x06d406f4, 0x06d406d4, 0x8e9836b5,
		0xffff5737, 0xffffffff, 0xffffffff, 0xffffffff, 0xee0cf738, 0xffffd565,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0x2f17f7ff, 0x06f60f16, 0x06f506f5, 0x06d406f5, 0x06d406d4,
		0x06d306d4, 0x4eb606d3, 0xffffffff, 0xffffffff, 0xf79bffff, 0xdd22eeb2,
		0xdd00dce0, 0xffffe62f, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xd6dbef7d, 0xa6d9d6ba, 0x06f546d6,
		0x06f406f4, 0x06d406d4, 0x06d306d3, 0x06d306d3, 0xffffbf7c, 0xffbeffff,
		0xe500dd24, 0xdd00dce0, 0xdce0dd00, 0xfffff759, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xf7beffff, 0xd6badebb,
		0xd6badeba, 0xce99de9a, 0x7eb7b699, 0x06d32eb5, 0x06d306d3, 0x06d306d3,
		0xf7ff1ed4, 0xffffffff, 0xe60cf7bd, 0xdd00dcc0, 0xe501e500, 0xffffffbd,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffff, 0xffdfffff, 0xffdfffdf,
		0xdedbffdf, 0xd6bad6ba, 0xd69ad6ba, 0xd69ad69a, 0xd679ce79, 0xce79de79,
		0x4e958e77, 0x06d31eb3, 0x46f606d2, 0xffffffdf, 0xffffffdf, 0xdd02eef5,
		0xdd23dcc0, 0xfffffffe, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffdfffff, 0xffdfffdf, 0xffdfffdf, 0xffffffdf, 0xffdfffff, 0xffdfffdf,
		0xffdfffdf, 0xf7dfffdf, 0xd6badefb, 0xd6bad6ba, 0xce99ceba, 0xce79ce9a,
		0xce79ce79, 0xce59ce59, 0xce59ce58, 0xc658d639, 0x1eb27e76, 0xffdf9f39,
		0xffdfffde, 0xffffffde, 0xe5cae568, 0xffffffdf, 0xffdfffdf, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xf7beffff, 0xffdff7be, 0xffdfffdf, 0xffdfffdf,
		0xffdfffdf, 0xf79ef7be, 0xef3cef7d, 0xdeb2df1c, 0x16f61716, 0x16f516f6,
		0x16f416f5, 0x16d416d4, 0x16d316d3, 0x1eb316d3, 0xdce2d548, 0xdce2dce2,
		0xdce2dce2, 0xc79d9587, 0xffdfffde, 0xf7dfffdf, 0xf79dffdf, 0xffdfffdf,
		0xffdfffdf, 0xffdfffdf, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xf7bef7be, 0xef5df7be, 0xdedbdefb, 0xdedbdedb, 0xdedbdedb, 0xde6ae6b5,
		0x06f506f5, 0x06f406f5, 0x06d406d4, 0x06d306d4, 0x06d306d3, 0xae5806b2,
		0xdcc0d56c, 0xdcc0dcc0, 0xe4a0dca0, 0x26d365cb, 0xf7bef7de, 0xf7bef7be,
		0xffdef7de, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf,
		0xffffffdf, 0xffffffff, 0xffffffff, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e,
		0xf7bef79e, 0xf7bef7be, 0xf7bef7be, 0xef7df7be, 0xdedbdedb, 0xdedbdedb,
		0xdebadedb, 0xe66af649, 0x06f506f5, 0x06d406f4, 0x06d306d4, 0x06d306d3,
		0x06b206d2, 0xc6596675, 0xd4a0d5f3, 0xdca0dca0, 0xdca0d4a0, 0x06b2362e,
		0xf7be6717, 0xf7beffbe, 0xf7bef7be, 0xf7bef7be, 0xffdff7be, 0xffdfffdf,
		0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffffffff, 0xf79ef79e,
		0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e,
		0xdedbd6ba, 0xdebad6ba, 0xee4cd6b9, 0xe649f649, 0x06f406f5, 0x06d406d4,
		0x06d306d3, 0x06d206d3, 0x369306d2, 0xce38d639, 0xdc80ce5a, 0xdca0dca0,
		0xe480dca0, 0x06b20e91, 0xaf5a06b1, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xffdff7be, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf,
		0xffffffdf, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xf7bef7be, 0xf7bef7be, 0xd6bad6ba, 0xd6bbd6ba, 0xf628ee6f, 0xe629f628,
		0x06d406f4, 0x06d306d3, 0x06b206d3, 0x06b206b2, 0xcf1b06b2, 0xc638c618,
		0xdd07c659, 0xdc80dc80, 0xb4e3dc80, 0x06b106b2, 0x0eb206b1, 0xf7dfefbe,
		0xf7bef7be, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf,
		0xffdfffdf, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xd69adedb, 0xe674d69a,
		0xf628fe28, 0xe629f628, 0x06d306d3, 0x06d306d3, 0x06b206b2, 0x06b106b2,
		0xffffb77b, 0xc638defb, 0xcd90c638, 0xdc80dc80, 0x5dcbdc80, 0x06b106b1,
		0x06b106b1, 0xffff36d4, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xd69adefb, 0xf628de99, 0xf608f608, 0xe628f608, 0x06d306d3, 0x06b206d2,
		0x06b206b2, 0x5ef606b1, 0xffffffff, 0xc638ffdf, 0xcdf4c638, 0xdc60dc80,
		0x1e70dc80, 0x06b106b1, 0x06b106b1, 0x975a06b1, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xce79e73c, 0xf607ee0a, 0xf608f608, 0xe608f5e7,
		0x06b206b2, 0x06b206b2, 0x06b106b1, 0xffff26b2, 0xffffffff, 0xf79effff,
		0xc617c618, 0xdc60dc60, 0x0e91cca1, 0x06910691, 0x06910691, 0x06910691,
		0xffffcf9c, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xe64fef5e, 0xf607f5e7,
		0xf5e7f607, 0xdde8f5e7, 0x06b206b2, 0x06b106b1, 0x06b106b1, 0xffffd7bd,
		0xffffffff, 0xffffffff, 0xc618d6ba, 0xdc60d4a4, 0x0690b4c3, 0x06910691,
		0x06910691, 0x06900691, 0xffff26b3, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffff,
		0xfdc7f737, 0xf5e7f5e7, 0xf5c7f5e7, 0xe5c7f5c7, 0x06b106b1, 0x06b106b1,
		0x87380690, 0xffffffff, 0xffffffff, 0xffffffff, 0xc618ffff, 0xdc40cd6e,
		0x06907548, 0x06900690, 0x06900690, 0x06900690, 0x4ef50690, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xf7ddffff, 0xf5c7e544, 0xf5c6f5c7, 0xf5c6f5c6, 0xe5c7f5c6,
		0x06b10eb1, 0x06900691, 0xffff46d4, 0xffffffff, 0xffffffff, 0xffffffff,
		0xef7dffff, 0xe420ce17, 0x06b02e2e, 0x06b006b0, 0x06b006b0, 0x06b006b0,
		0x06900690, 0xffffc79c, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xdce4ffff, 0xe523d460, 0xf5a6f5c6,
		0xf5a6f5a6, 0xe5c7f5a6, 0x06900e90, 0x0e900690, 0xffffefde, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xcc63d6ba, 0x069006b1, 0x06900690,
		0x06900690, 0x06900690, 0x06900690, 0xe7dd0670, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xdc60ee0e,
		0xd460dc60, 0xeda6e4e2, 0xf586f5a6, 0xe5a7f5a6, 0x06900e90, 0xc79b0690,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x958dffff,
		0x069006b0, 0x06900690, 0x06900690, 0x06900690, 0x06900690, 0x46d40690,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xee94ffff, 0xdc40d440, 0xd440dc40, 0xe481d440, 0xed85f586, 0xe586f585,
		0x066f0e90, 0xffff66f6, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xdf5cffff, 0x46529615, 0x068f0690, 0x0690068f, 0x06900690,
		0x06900690, 0x066f0670, 0xffff7f17, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xd441f7bd, 0xd420dc20, 0xdc20d420, 0xd420d420,
		0xed65dc61, 0xe586ed85, 0x2eb20e90, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xc5f8debb, 0xa616c5f7,
		0x4e528635, 0x066f0e70, 0x068f068f, 0x0690068f, 0xd7bd0690, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xdc20d463, 0xd420d420,
		0xd420d420, 0xd420d420, 0xd420d420, 0xe586ed44, 0xd7bc0e6f, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xc617ffdf, 0xbdf7bdf7, 0xcdf7bdf7, 0xa616cdf8, 0x36526e34, 0x066f1670,
		0x1e90068f, 0xfffff7ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xe5ceffff,
		0xd420d420, 0xd400d400, 0xd400d400, 0xd400d400, 0xd400d400, 0xe545d400,
		0xffffb77a, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xef7effff, 0xbdf7bdf7, 0xbdf7bdf7, 0xc5f7bdf7,
		0xbdf7bdf7, 0xb617c5f7, 0x1e716e34, 0xffff6ef5, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xf77cffff, 0xf79cf79c, 0xf79cf79c, 0xf79cf79c, 0xf79cf79c,
		0xf79cf79c, 0xf79cf79c, 0xfffff7ff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xd442dd8e,
		0xd442d442, 0xd442d442, 0xd443d442, 0xf7bfef7c, 0xffbff7bf, 0xffffefde,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xd422ffdf, 0xd400d3e0, 0xcc00d400, 0xe632d3e0, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffdf, 0xffffffdf, 0xffdfffdf,
		0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf,
		0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xef3affdf, 0xd3e0d3e0, 0xd3e0d400,
		0xffffdd4b, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffdf,
		0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xf7bef7be, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e,
		0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf7bef79e,
		0xd3e0dd6d, 0xcbe1d3e0, 0xf7bef79e, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffffffdf, 0xffffffdf, 0xffdfffdf,
		0xf7beffdf, 0xf7bef7be, 0xf7bef7be, 0xf79ef7be, 0xf79ef79e, 0xf79ef79e,
		0xef7df79e, 0xef7def7d, 0xef7def7d, 0xef5def5d, 0xef5def5d, 0xef5def5d,
		0xef5def5d, 0xef5def5d, 0xef5def5d, 0xef5def5d, 0xef5def5d, 0xef5def5d,
		0xef5def5d, 0xef5def5d, 0xd465ef7e, 0xe6d9d3e0, 0xef7df77d, 0xef7def7d,
		0xf79ef79e, 0xf79ef79e, 0xf7bef79e, 0xf7bef7be, 0xf7bef7be, 0xffdff7be,
		0xffdfffdf, 0xffdfffdf, 0xf7beffdf, 0xf7bef7be, 0xf7bef7be, 0xf79ef7be,
		0xf79ef79e, 0xf79ef79e, 0xef7def7d, 0xef7def7d, 0xef7def7d, 0xef5def5d,
		0xef5def5d, 0xef5def5d, 0xef5def5d, 0xe73cef5d, 0xe73ce73c, 0xe73ce73c,
		0xe73ce73c, 0xef5def5d, 0xef5def5d, 0xef5def5d, 0xe697ef5d, 0xef5edd4c,
		0xef7def7d, 0xef7def7d, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf7bef7be,
		0xf7bef7be, 0xffdff7be, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf,
		0xffdfffdf, 0xffdfffdf, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xf79ef7be, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e,
		0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e, 0xf79ef79e,
		0xf79ef79e, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be, 0xf7bef7be,
		0xffdff7be, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffdfffff, 0xffdfffdf, 0xffffffdf,
		0xffffffff, 0xffdfffff, 0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffffffff,
		0xffdfffdf, 0xffdfffdf, 0xffdfffdf, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
		0xffffffff};



#endif /* SPRITE_H_ */
