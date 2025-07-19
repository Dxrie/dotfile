/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0e1420ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc2c4c7ff, 0x0e1420ff, 0x5d6472ff },
	[SchemeSel]  = { 0xc2c4c7ff, 0xB29B74ff, 0xA25C62ff },
	[SchemeUrg]  = { 0xc2c4c7ff, 0xA25C62ff, 0xB29B74ff },
};
