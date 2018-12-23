const unsigned int kickerSimpleHoleNumVertices=42;
const unsigned int kickerSimpleHoleNumIndices=126;
const Vertex3D_NoTex2 kickerSimpleHoleMesh[42]=
{
{ -0.300698f,0.871887f,-0.623927f, 0.312300f,-0.950000f,0.000000f, 0.497836f,0.036364f},
{ -0.583629f,0.720173f,-0.006035f, 0.618400f,-0.785800f,0.000000f, 0.331702f,0.985736f},
{ -0.583629f,0.720173f,-0.623927f, 0.618400f,-0.785800f,0.000000f, 0.331702f,0.036364f},
{ -0.300695f,0.871888f,-0.006035f, 0.312300f,-0.950000f,0.000000f, 0.497836f,0.985736f},
{ -0.797609f,0.480827f,-0.006035f, 0.849900f,-0.526900f,0.000000f, 0.186078f,0.985736f},
{ -0.797609f,0.480827f,-0.623927f, 0.849900f,-0.526900f,0.000000f, 0.186078f,0.036364f},
{ -0.916825f,0.182724f,-0.006035f, 0.978900f,-0.204500f,0.000000f, 0.077372f,0.985736f},
{ -0.916825f,0.182724f,-0.623927f, 0.978900f,-0.204500f,0.000000f, 0.077372f,0.036364f},
{ -0.926900f,-0.138192f,-0.006035f, 0.989800f,0.142600f,0.000000f, 0.019943f,0.985736f},
{ -0.926900f,-0.138192f,-0.623927f, 0.989800f,0.142600f,0.000000f, 0.019943f,0.036364f},
{ -0.826617f,-0.443205f,-0.006035f, 0.881300f,0.472500f,0.000000f, 0.019943f,0.985736f},
{ -0.826616f,-0.443205f,-0.623927f, 0.881300f,0.472500f,0.000000f, 0.019943f,0.036364f},
{ -0.628071f,-0.695526f,-0.006035f, 0.666600f,0.745500f,-0.000000f, 0.077372f,0.985736f},
{ -0.628071f,-0.695526f,-0.623927f, 0.666600f,0.745500f,-0.000000f, 0.077372f,0.036364f},
{ -0.355210f,-0.864721f,-0.006035f, 0.371400f,0.928500f,-0.000000f, 0.186078f,0.985736f},
{ -0.355211f,-0.864725f,-0.623927f, 0.371400f,0.928500f,-0.000000f, 0.186078f,0.036364f},
{ -0.040955f,-0.930391f,-0.006035f, 0.031400f,0.999500f,-0.000000f, 0.331702f,0.985736f},
{ -0.040955f,-0.930391f,-0.623927f, 0.031400f,0.999500f,-0.000000f, 0.331702f,0.036364f},
{ 0.276811f,-0.884607f,-0.006035f, -0.312300f,0.950000f,-0.000000f, 0.497836f,0.985736f},
{ 0.276812f,-0.884610f,-0.623927f, -0.312300f,0.950000f,-0.000000f, 0.497836f,0.036364f},
{ 0.559739f,-0.732893f,-0.006035f, -0.618400f,0.785800f,-0.000000f, 0.663971f,0.985736f},
{ 0.559740f,-0.732897f,-0.623927f, -0.618400f,0.785800f,-0.000000f, 0.663971f,0.036364f},
{ 0.773718f,-0.493552f,-0.006035f, -0.849900f,0.526900f,-0.000000f, 0.810279f,0.985736f},
{ 0.773719f,-0.493556f,-0.623927f, -0.849900f,0.526900f,-0.000000f, 0.810279f,0.036364f},
{ 0.892939f,-0.195444f,-0.006035f, -0.978900f,0.204500f,-0.000000f, 0.918301f,0.985736f},
{ 0.892940f,-0.195444f,-0.623927f, -0.978900f,0.204500f,-0.000000f, 0.918301f,0.036364f},
{ 0.903673f,0.146425f,-0.623927f, -0.988000f,-0.154400f,-0.000000f, 0.979832f,0.036364f},
{ 0.802731f,0.430481f,-0.006035f, -0.875600f,-0.483000f,-0.000000f, 0.975730f,0.985736f},
{ 0.802731f,0.430481f,-0.623927f, -0.875600f,-0.483000f,-0.000000f, 0.979832f,0.036364f},
{ 0.903672f,0.146427f,-0.006035f, -0.988000f,-0.154400f,-0.000000f, 0.975730f,0.985736f},
{ 0.604186f,0.682806f,-0.006035f, -0.666600f,-0.745400f,0.000000f, 0.918301f,0.985736f},
{ 0.604186f,0.682806f,-0.623927f, -0.666600f,-0.745400f,0.000000f, 0.918301f,0.036364f},
{ 0.312863f,0.863453f,-0.623927f, -0.093700f,-0.995600f,0.000000f, 0.802759f,0.036364f},
{ 0.300084f,0.858535f,-0.006035f, 0.080600f,-0.996700f,0.000000f, 0.795238f,0.985736f},
{ 0.300084f,0.858535f,-0.623927f, 0.080600f,-0.996700f,0.000000f, 0.795238f,0.036364f},
{ 0.312863f,0.863453f,-0.006035f, -0.093600f,-0.995600f,0.000000f, 0.802759f,0.985736f},
{ 0.017062f,0.917670f,-0.623927f, -0.031400f,-0.999500f,0.000000f, 0.663971f,0.036364f},
{ 0.017062f,0.917670f,-0.006035f, -0.031400f,-0.999500f,0.000000f, 0.663971f,0.985736f},
{ 0.903013f,0.125472f,-0.006035f, -0.999500f,0.031400f,-0.000000f, 0.975730f,0.985736f},
{ 0.903014f,0.125468f,-0.623927f, -0.999500f,0.031400f,-0.000000f, 0.979832f,0.036364f},
{ 0.331325f,0.852009f,-0.006035f, -0.526900f,-0.849900f,0.000000f, 0.810279f,0.985736f},
{ 0.331326f,0.852006f,-0.623927f, -0.527000f,-0.849900f,0.000000f, 0.810279f,0.036364f}
};

const WORD kickerSimpleHoleIndices[126]=
{
	0, 1, 2,
	3, 1, 0,
	1, 4, 2,
	36, 3, 0,
	2, 4, 5,
	37, 3, 36,
	4, 6, 5,
	34, 37, 36,
	5, 6, 7,
	33, 37, 34,
	6, 8, 7,
	32, 33, 34,
	7, 8, 9,
	35, 33, 32,
	8, 10, 9,
	35, 32, 41,
	9, 10, 11,
	35, 41, 40,
	10, 12, 11,
	40, 41, 31,
	11, 12, 13,
	40, 31, 30,
	12, 14, 13,
	28, 30, 31,
	13, 14, 15,
	27, 30, 28,
	14, 16, 15,
	26, 27, 28,
	15, 16, 17,
	29, 27, 26,
	16, 18, 17,
	29, 26, 39,
	17, 18, 19,
	29, 39, 38,
	18, 20, 19,
	38, 39, 25,
	19, 20, 21,
	38, 25, 24,
	20, 22, 21,
	23, 24, 25,
	21, 22, 23,
	22, 24, 23
};
