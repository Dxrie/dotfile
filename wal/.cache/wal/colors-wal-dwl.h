/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0F0F04ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c3c0ff, 0x0F0F04ff, 0x686855ff },
	[SchemeSel]  = { 0xc3c3c0ff, 0x906733ff, 0x635F4Eff },
	[SchemeUrg]  = { 0xc3c3c0ff, 0x635F4Eff, 0x906733ff },
};
