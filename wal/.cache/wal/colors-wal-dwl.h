/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x12101eff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c3c6ff, 0x12101eff, 0x5f5d71ff },
	[SchemeSel]  = { 0xc3c3c6ff, 0x7C819Bff, 0x8C7893ff },
	[SchemeUrg]  = { 0xc3c3c6ff, 0x8C7893ff, 0x7C819Bff },
};
