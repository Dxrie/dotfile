/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x141c31ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc4c6cbff, 0x141c31ff, 0x646a7aff },
	[SchemeSel]  = { 0xc4c6cbff, 0x546D8Bff, 0xC6B978ff },
	[SchemeUrg]  = { 0xc4c6cbff, 0xC6B978ff, 0x546D8Bff },
};
