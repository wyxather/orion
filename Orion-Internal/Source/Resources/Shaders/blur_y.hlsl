static const float offsets[3] = { 0.f, 1.3846153846f, 3.2307692308f };
static const float weights[3] = { 0.227027027f, 0.3162162162f, 0.0702702703f };

sampler texSampler;
float   texelHeight;

float4 main(float2 uv : TEXCOORD0) : COLOR0
{
    float4 color = tex2D(texSampler, uv);
    color.rgb *= weights[0];

    for (int i = 1; i < 3; ++i) {
        color.rgb += tex2D(texSampler, float2(uv.x, uv.y - texelHeight * offsets[i])).rgb * weights[i];
        color.rgb += tex2D(texSampler, float2(uv.x, uv.y + texelHeight * offsets[i])).rgb * weights[i];
    }

    return color;
}