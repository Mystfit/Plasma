


static const uint32_t ps_CalphaAaddbyteLen = 76;

static const uint8_t ps_CalphaAaddCodes[] = {
	0x1,	0x1,	0xff,	0xff,
	0x42,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0xb0,
	0x42,	0x0,	0x0,	0x0,
	0x1,	0x0,	0xf,	0xb0,
	0x12,	0x0,	0x0,	0x0,
	0x0,	0x0,	0x7,	0x80,
	0x1,	0x0,	0xff,	0xb0,
	0x1,	0x0,	0xe4,	0xb0,
	0x0,	0x0,	0xe4,	0xb0,
	0x2,	0x0,	0x0,	0x0,
	0x0,	0x0,	0x8,	0x80,
	0x0,	0x0,	0xe4,	0xb0,
	0x1,	0x0,	0xe4,	0xb0,
	0x5,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x0,	0x0,	0xe4,	0x80,
	0x0,	0x0,	0xe4,	0x90,
	0xff,	0xff,	0x0,	0x0
	};

static const plShaderDecl ps_CalphaAaddDecl("sha/ps_CalphaAadd.inl", ps_CalphaAadd, ps_CalphaAaddbyteLen, ps_CalphaAaddCodes);

static const plShaderRegister ps_CalphaAaddRegister(&ps_CalphaAaddDecl);

