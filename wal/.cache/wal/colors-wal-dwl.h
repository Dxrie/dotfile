/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x242d1eff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc8cac6ff, 0x242d1eff, 0x6e7c65ff },
	[SchemeSel]  = { 0xc8cac6ff, 0x467687ff, 0xA5C25Dff },
	[SchemeUrg]  = { 0xc8cac6ff, 0xA5C25Dff, 0x467687ff },
};
