//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Fc ps_Passthrough.inl /E ps_main /T ps_3_0 ps_Passthrough.fx
//
//
// Parameters:
//
//   sampler2D Tex0;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   Tex0         s0       1
//

    ps_3_0
    def c0, 1, -1, 0, 0
    dcl_texcoord v0.xy
    dcl_2d s0
    mad r0.xy, v0, c0, c0.zxzw
    texld oC0, r0, s0

// approximately 2 instruction slots used (1 texture, 1 arithmetic)
