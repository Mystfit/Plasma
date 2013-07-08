// Pixel shader input structure
struct PS_INPUT
{
    float4 Position   : POSITION;
    float2 Texture    : TEXCOORD0;
};


// Pixel shader output structure
struct PS_OUTPUT
{
    float4 Color   : COLOR0;
};


// Global variables
sampler2D Tex0 : register(s0);


// Name: Simple Pixel Shader
// Type: Pixel shader
// Desc: Fetch texture and blend with constant color
//
PS_OUTPUT ps_main( in PS_INPUT In )
{
    PS_OUTPUT Out;                             //create an output pixel

    Out.Color = tex2D(Tex0, In.Texture);       //do a texture lookup
    Out.Color *= float4(0.9f, 0.8f, 0.4, 1);   //do a simple effect

    return Out;                                //return output pixel
}