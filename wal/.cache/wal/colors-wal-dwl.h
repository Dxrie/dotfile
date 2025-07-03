/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0f1424ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c4c8ff, 0x0f1424ff, 0x5e6374ff },
	[SchemeSel]  = { 0xc3c4c8ff, 0x2E6097ff, 0x978B6Eff },
	[SchemeUrg]  = { 0xc3c4c8ff, 0x978B6Eff, 0x2E6097ff },
};
