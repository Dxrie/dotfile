/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x081430ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc1c4cbff, 0x081430ff, 0x606675ff },
	[SchemeSel]  = { 0xc1c4cbff, 0xA66BA4ff, 0x9375B5ff },
	[SchemeUrg]  = { 0xc1c4cbff, 0x9375B5ff, 0xA66BA4ff },
};
