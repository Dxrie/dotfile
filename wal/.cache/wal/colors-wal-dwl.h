/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0f2024ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c7c8ff, 0x0f2024ff, 0x5e7074ff },
	[SchemeSel]  = { 0xc3c7c8ff, 0x2F8379ff, 0xB26E4Eff },
	[SchemeUrg]  = { 0xc3c7c8ff, 0xB26E4Eff, 0x2F8379ff },
};
