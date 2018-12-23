const unsigned int kickerHoleNumVertices=192;
const unsigned int kickerHoleNumIndices=288;
const Vertex3D_NoTex2 kickerHoleMesh[192]=
{
{ 0.795518f,0.000001f,-0.021814f, -0.235300f,-0.031000f,0.971400f, 0.208334f,0.169846f},
{ 0.941778f,0.252349f,0.021664f, -0.235300f,-0.031000f,0.971400f, 0.166667f,0.000000f},
{ 0.768411f,0.205898f,-0.021814f, -0.235300f,-0.031000f,0.971400f, 0.166667f,0.169846f},
{ 0.975000f,0.000000f,0.021664f, -0.235300f,-0.031000f,0.971400f, 0.208334f,0.000000f},
{ 0.844375f,0.487500f,0.021664f, -0.219300f,-0.090800f,0.971400f, 0.125001f,0.000000f},
{ 0.768411f,0.205898f,-0.021814f, -0.219300f,-0.090800f,0.971400f, 0.166667f,0.169846f},
{ 0.941778f,0.252349f,0.021664f, -0.219300f,-0.090800f,0.971400f, 0.166667f,0.000000f},
{ 0.688938f,0.397762f,-0.021814f, -0.219300f,-0.090800f,0.971400f, 0.125000f,0.169846f},
{ 0.688938f,0.397762f,-0.021814f, -0.188300f,-0.144500f,0.971400f, 0.125000f,0.169846f},
{ 0.689429f,0.689429f,0.021664f, -0.188300f,-0.144500f,0.971400f, 0.083334f,0.000000f},
{ 0.562515f,0.562520f,-0.021814f, -0.188300f,-0.144500f,0.971400f, 0.083333f,0.169846f},
{ 0.844375f,0.487500f,0.021664f, -0.188300f,-0.144500f,0.971400f, 0.125001f,0.000000f},
{ 0.562515f,0.562520f,-0.021814f, -0.144500f,-0.188300f,0.971400f, 0.083333f,0.169846f},
{ 0.689429f,0.689429f,0.021664f, -0.144500f,-0.188300f,0.971400f, 0.083334f,0.000000f},
{ 0.487500f,0.844375f,0.021664f, -0.144500f,-0.188300f,0.971400f, 0.041668f,0.000000f},
{ 0.397757f,0.688944f,-0.021814f, -0.144500f,-0.188300f,0.971400f, 0.041667f,0.169846f},
{ 0.397757f,0.688944f,-0.021814f, -0.090800f,-0.219300f,0.971400f, 0.041667f,0.169846f},
{ 0.252349f,0.941778f,0.021664f, -0.090800f,-0.219300f,0.971400f, 0.000000f,0.000000f},
{ 0.205892f,0.768417f,-0.021814f, -0.090800f,-0.219300f,0.971400f, 0.000000f,0.169846f},
{ 0.487500f,0.844375f,0.021664f, -0.090800f,-0.219300f,0.971400f, 0.041668f,0.000000f},
{ 0.205892f,0.768417f,-0.021814f, -0.031000f,-0.235300f,0.971400f, 0.999999f,0.169846f},
{ 0.252349f,0.941778f,0.021664f, -0.031000f,-0.235300f,0.971400f, 0.999999f,0.000000f},
{ 0.000000f,0.975000f,0.021664f, -0.031000f,-0.235300f,0.971400f, 0.958333f,0.000000f},
{ -0.000004f,0.795523f,-0.021814f, -0.031000f,-0.235300f,0.971400f, 0.958333f,0.169846f},
{ -0.000004f,0.795523f,-0.021814f, 0.031000f,-0.235300f,0.971400f, 0.958333f,0.169846f},
{ -0.252349f,0.941778f,0.021664f, 0.031000f,-0.235300f,0.971400f, 0.916667f,0.000000f},
{ -0.205900f,0.768417f,-0.021814f, 0.031000f,-0.235300f,0.971400f, 0.916666f,0.169846f},
{ 0.000000f,0.975000f,0.021664f, 0.031000f,-0.235300f,0.971400f, 0.958333f,0.000000f},
{ -0.205900f,0.768417f,-0.021814f, 0.090800f,-0.219300f,0.971400f, 0.916666f,0.169846f},
{ -0.252349f,0.941778f,0.021664f, 0.090800f,-0.219300f,0.971400f, 0.916667f,0.000000f},
{ -0.487500f,0.844375f,0.021664f, 0.090800f,-0.219300f,0.971400f, 0.875000f,0.000000f},
{ -0.397765f,0.688944f,-0.021814f, 0.090800f,-0.219300f,0.971400f, 0.875000f,0.169846f},
{ -0.397765f,0.688944f,-0.021814f, 0.144500f,-0.188300f,0.971400f, 0.875000f,0.169846f},
{ -0.689429f,0.689429f,0.021664f, 0.144500f,-0.188300f,0.971400f, 0.833333f,0.000000f},
{ -0.562523f,0.562520f,-0.021814f, 0.144500f,-0.188300f,0.971400f, 0.833333f,0.169846f},
{ -0.487500f,0.844375f,0.021664f, 0.144500f,-0.188300f,0.971400f, 0.875000f,0.000000f},
{ -0.562523f,0.562520f,-0.021814f, 0.188300f,-0.144500f,0.971400f, 0.833333f,0.169846f},
{ -0.689429f,0.689429f,0.021664f, 0.188300f,-0.144500f,0.971400f, 0.833333f,0.000000f},
{ -0.844375f,0.487500f,0.021664f, 0.188300f,-0.144500f,0.971400f, 0.791667f,0.000000f},
{ -0.688946f,0.397762f,-0.021814f, 0.188300f,-0.144500f,0.971400f, 0.791667f,0.169846f},
{ -0.688946f,0.397762f,-0.021814f, 0.219300f,-0.090800f,0.971400f, 0.791667f,0.169846f},
{ -0.941778f,0.252349f,0.021664f, 0.219300f,-0.090800f,0.971400f, 0.750000f,0.000000f},
{ -0.768419f,0.205898f,-0.021814f, 0.219300f,-0.090800f,0.971400f, 0.750000f,0.169846f},
{ -0.844375f,0.487500f,0.021664f, 0.219300f,-0.090800f,0.971400f, 0.791667f,0.000000f},
{ -0.768419f,0.205898f,-0.021814f, 0.235300f,-0.031000f,0.971400f, 0.750000f,0.169846f},
{ -0.941778f,0.252349f,0.021664f, 0.235300f,-0.031000f,0.971400f, 0.750000f,0.000000f},
{ -0.975000f,0.000000f,0.021664f, 0.235300f,-0.031000f,0.971400f, 0.708334f,0.000000f},
{ -0.795526f,0.000001f,-0.021814f, 0.235300f,-0.031000f,0.971400f, 0.708334f,0.169846f},
{ -0.795526f,0.000001f,-0.021814f, 0.235300f,0.031000f,0.971400f, 0.708334f,0.169846f},
{ -0.941778f,-0.252349f,0.021664f, 0.235300f,0.031000f,0.971400f, 0.666667f,0.000000f},
{ -0.768419f,-0.205895f,-0.021814f, 0.235300f,0.031000f,0.971400f, 0.666667f,0.169846f},
{ -0.975000f,0.000000f,0.021664f, 0.235300f,0.031000f,0.971400f, 0.708334f,0.000000f},
{ -0.768419f,-0.205895f,-0.021814f, 0.219300f,0.090800f,0.971400f, 0.666667f,0.169846f},
{ -0.941778f,-0.252349f,0.021664f, 0.219300f,0.090800f,0.971400f, 0.666667f,0.000000f},
{ -0.844375f,-0.487500f,0.021664f, 0.219300f,0.090800f,0.971400f, 0.625000f,0.000000f},
{ -0.688946f,-0.397760f,-0.021814f, 0.219300f,0.090800f,0.971400f, 0.625001f,0.169846f},
{ -0.688946f,-0.397760f,-0.021814f, 0.188300f,0.144500f,0.971400f, 0.625001f,0.169846f},
{ -0.689429f,-0.689429f,0.021664f, 0.188300f,0.144500f,0.971400f, 0.583334f,0.000000f},
{ -0.562523f,-0.562518f,-0.021814f, 0.188300f,0.144500f,0.971400f, 0.583334f,0.169846f},
{ -0.844375f,-0.487500f,0.021664f, 0.188300f,0.144500f,0.971400f, 0.625000f,0.000000f},
{ -0.562523f,-0.562518f,-0.021814f, 0.144500f,0.188300f,0.971400f, 0.583334f,0.169846f},
{ -0.689429f,-0.689429f,0.021664f, 0.144500f,0.188300f,0.971400f, 0.583334f,0.000000f},
{ -0.487500f,-0.844375f,0.021664f, 0.144500f,0.188300f,0.971400f, 0.541667f,0.000000f},
{ -0.397765f,-0.688941f,-0.021814f, 0.144500f,0.188300f,0.971400f, 0.541668f,0.169846f},
{ -0.397765f,-0.688941f,-0.021814f, 0.090800f,0.219300f,0.971400f, 0.541668f,0.169846f},
{ -0.252349f,-0.941778f,0.021664f, 0.090800f,0.219300f,0.971400f, 0.500000f,0.000000f},
{ -0.205900f,-0.768414f,-0.021814f, 0.090800f,0.219300f,0.971400f, 0.500001f,0.169846f},
{ -0.487500f,-0.844375f,0.021664f, 0.090800f,0.219300f,0.971400f, 0.541667f,0.000000f},
{ -0.205900f,-0.768414f,-0.021814f, 0.031000f,0.235300f,0.971400f, 0.500001f,0.169846f},
{ -0.252349f,-0.941778f,0.021664f, 0.031000f,0.235300f,0.971400f, 0.500000f,0.000000f},
{ 0.000000f,-0.975000f,0.021664f, 0.031000f,0.235300f,0.971400f, 0.458334f,0.000000f},
{ -0.000004f,-0.795521f,-0.021814f, 0.031000f,0.235300f,0.971400f, 0.458335f,0.169846f},
{ -0.000004f,-0.795521f,-0.021814f, -0.031000f,0.235300f,0.971400f, 0.458335f,0.169846f},
{ 0.252349f,-0.941778f,0.021664f, -0.031000f,0.235300f,0.971400f, 0.416667f,0.000000f},
{ 0.205892f,-0.768414f,-0.021814f, -0.031000f,0.235300f,0.971400f, 0.416668f,0.169846f},
{ 0.000000f,-0.975000f,0.021664f, -0.031000f,0.235300f,0.971400f, 0.458334f,0.000000f},
{ 0.205892f,-0.768414f,-0.021814f, -0.090800f,0.219300f,0.971400f, 0.416668f,0.169846f},
{ 0.252349f,-0.941778f,0.021664f, -0.090800f,0.219300f,0.971400f, 0.416667f,0.000000f},
{ 0.487500f,-0.844375f,0.021664f, -0.090800f,0.219300f,0.971400f, 0.375001f,0.000000f},
{ 0.397757f,-0.688941f,-0.021814f, -0.090800f,0.219300f,0.971400f, 0.375001f,0.169846f},
{ 0.397757f,-0.688941f,-0.021814f, -0.144500f,0.188300f,0.971400f, 0.375001f,0.169846f},
{ 0.689429f,-0.689429f,0.021664f, -0.144500f,0.188300f,0.971400f, 0.333334f,0.000000f},
{ 0.562515f,-0.562518f,-0.021814f, -0.144500f,0.188300f,0.971400f, 0.333334f,0.169846f},
{ 0.487500f,-0.844375f,0.021664f, -0.144500f,0.188300f,0.971400f, 0.375001f,0.000000f},
{ 0.562515f,-0.562518f,-0.021814f, -0.188300f,0.144500f,0.971400f, 0.333334f,0.169846f},
{ 0.689429f,-0.689429f,0.021664f, -0.188300f,0.144500f,0.971400f, 0.333334f,0.000000f},
{ 0.844375f,-0.487500f,0.021664f, -0.188300f,0.144500f,0.971400f, 0.291667f,0.000000f},
{ 0.688938f,-0.397760f,-0.021814f, -0.188300f,0.144500f,0.971400f, 0.291667f,0.169846f},
{ 0.688938f,-0.397760f,-0.021814f, -0.219300f,0.090800f,0.971400f, 0.291667f,0.169846f},
{ 0.941778f,-0.252349f,0.021664f, -0.219300f,0.090800f,0.971400f, 0.250001f,0.000000f},
{ 0.768411f,-0.205895f,-0.021814f, -0.219300f,0.090800f,0.971400f, 0.250001f,0.169846f},
{ 0.844375f,-0.487500f,0.021664f, -0.219300f,0.090800f,0.971400f, 0.291667f,0.000000f},
{ 0.768411f,-0.205895f,-0.021814f, -0.235300f,0.031000f,0.971400f, 0.250001f,0.169846f},
{ 0.941778f,-0.252349f,0.021664f, -0.235300f,0.031000f,0.971400f, 0.250001f,0.000000f},
{ 0.975000f,0.000000f,0.021664f, -0.235300f,0.031000f,0.971400f, 0.208334f,0.000000f},
{ 0.795518f,0.000001f,-0.021814f, -0.235300f,0.031000f,0.971400f, 0.208334f,0.169846f},
{ 0.795518f,0.000001f,-0.478336f, -0.991400f,-0.130500f,-0.000000f, 0.208334f,0.992938f},
{ 0.795518f,0.000001f,-0.021814f, -0.991400f,-0.130500f,-0.000000f, 0.208334f,0.169846f},
{ 0.768411f,0.205898f,-0.021814f, -0.991400f,-0.130500f,-0.000000f, 0.166667f,0.169846f},
{ 0.768411f,0.205898f,-0.478336f, -0.991400f,-0.130500f,-0.000000f, 0.166667f,0.992938f},
{ 0.768411f,0.205898f,-0.478336f, -0.923900f,-0.382700f,-0.000000f, 0.166667f,0.992938f},
{ 0.688938f,0.397762f,-0.021814f, -0.923900f,-0.382700f,-0.000000f, 0.125000f,0.169846f},
{ 0.688938f,0.397762f,-0.478336f, -0.923900f,-0.382700f,-0.000000f, 0.125000f,0.992938f},
{ 0.768411f,0.205898f,-0.021814f, -0.923900f,-0.382700f,-0.000000f, 0.166667f,0.169846f},
{ 0.688938f,0.397762f,-0.478336f, -0.793400f,-0.608800f,-0.000000f, 0.125000f,0.992938f},
{ 0.688938f,0.397762f,-0.021814f, -0.793400f,-0.608800f,-0.000000f, 0.125000f,0.169846f},
{ 0.562515f,0.562520f,-0.021814f, -0.793400f,-0.608800f,-0.000000f, 0.083333f,0.169846f},
{ 0.562515f,0.562520f,-0.478336f, -0.793400f,-0.608800f,-0.000000f, 0.083333f,0.992938f},
{ 0.562515f,0.562520f,-0.478336f, -0.608800f,-0.793400f,-0.000000f, 0.083333f,0.992938f},
{ 0.397757f,0.688944f,-0.021814f, -0.608800f,-0.793400f,-0.000000f, 0.041667f,0.169846f},
{ 0.397757f,0.688944f,-0.478336f, -0.608800f,-0.793400f,-0.000000f, 0.041667f,0.992938f},
{ 0.562515f,0.562520f,-0.021814f, -0.608800f,-0.793400f,-0.000000f, 0.083333f,0.169846f},
{ 0.397757f,0.688944f,-0.478336f, -0.382700f,-0.923900f,-0.000000f, 0.041667f,0.992938f},
{ 0.205892f,0.768417f,-0.021814f, -0.382700f,-0.923900f,-0.000000f, 0.000000f,0.169846f},
{ 0.205892f,0.768417f,-0.478336f, -0.382700f,-0.923900f,-0.000000f, 0.000000f,0.992938f},
{ 0.397757f,0.688944f,-0.021814f, -0.382700f,-0.923900f,-0.000000f, 0.041667f,0.169846f},
{ 0.205892f,0.768417f,-0.478336f, -0.130500f,-0.991400f,-0.000000f, 1.000062f,0.992938f},
{ -0.000004f,0.795523f,-0.021814f, -0.130500f,-0.991400f,-0.000000f, 0.958333f,0.169846f},
{ -0.000004f,0.795523f,-0.478336f, -0.130500f,-0.991400f,-0.000000f, 0.958333f,0.992938f},
{ 0.205892f,0.768417f,-0.021814f, -0.130500f,-0.991400f,-0.000000f, 0.999999f,0.169846f},
{ -0.000004f,0.795523f,-0.478336f, 0.130500f,-0.991400f,-0.000000f, 0.958333f,0.992938f},
{ -0.000004f,0.795523f,-0.021814f, 0.130500f,-0.991400f,-0.000000f, 0.958333f,0.169846f},
{ -0.205900f,0.768417f,-0.021814f, 0.130500f,-0.991400f,-0.000000f, 0.916666f,0.169846f},
{ -0.205900f,0.768417f,-0.478336f, 0.130500f,-0.991400f,-0.000000f, 0.916666f,0.992938f},
{ -0.205900f,0.768417f,-0.478336f, 0.382700f,-0.923900f,-0.000000f, 0.916666f,0.992938f},
{ -0.397765f,0.688944f,-0.021814f, 0.382700f,-0.923900f,-0.000000f, 0.875000f,0.169846f},
{ -0.397765f,0.688944f,-0.478336f, 0.382700f,-0.923900f,-0.000000f, 0.875000f,0.992938f},
{ -0.205900f,0.768417f,-0.021814f, 0.382700f,-0.923900f,-0.000000f, 0.916666f,0.169846f},
{ -0.397765f,0.688944f,-0.478336f, 0.608800f,-0.793400f,-0.000000f, 0.875000f,0.992938f},
{ -0.397765f,0.688944f,-0.021814f, 0.608800f,-0.793400f,-0.000000f, 0.875000f,0.169846f},
{ -0.562523f,0.562520f,-0.021814f, 0.608800f,-0.793400f,-0.000000f, 0.833333f,0.169846f},
{ -0.562523f,0.562520f,-0.478336f, 0.608800f,-0.793400f,-0.000000f, 0.833333f,0.992938f},
{ -0.562523f,0.562520f,-0.478336f, 0.793400f,-0.608800f,-0.000000f, 0.833333f,0.992938f},
{ -0.688946f,0.397762f,-0.021814f, 0.793400f,-0.608800f,-0.000000f, 0.791667f,0.169846f},
{ -0.688946f,0.397762f,-0.478336f, 0.793400f,-0.608800f,-0.000000f, 0.791667f,0.992938f},
{ -0.562523f,0.562520f,-0.021814f, 0.793400f,-0.608800f,-0.000000f, 0.833333f,0.169846f},
{ -0.688946f,0.397762f,-0.478336f, 0.923900f,-0.382700f,-0.000000f, 0.791667f,0.992938f},
{ -0.688946f,0.397762f,-0.021814f, 0.923900f,-0.382700f,-0.000000f, 0.791667f,0.169846f},
{ -0.768419f,0.205898f,-0.021814f, 0.923900f,-0.382700f,-0.000000f, 0.750000f,0.169846f},
{ -0.768419f,0.205898f,-0.478336f, 0.923900f,-0.382700f,-0.000000f, 0.750000f,0.992938f},
{ -0.768419f,0.205898f,-0.478336f, 0.991400f,-0.130500f,-0.000000f, 0.750000f,0.992938f},
{ -0.795526f,0.000001f,-0.021814f, 0.991400f,-0.130500f,-0.000000f, 0.708334f,0.169846f},
{ -0.795526f,0.000001f,-0.478336f, 0.991400f,-0.130500f,-0.000000f, 0.708334f,0.992938f},
{ -0.768419f,0.205898f,-0.021814f, 0.991400f,-0.130500f,-0.000000f, 0.750000f,0.169846f},
{ -0.795526f,0.000001f,-0.478336f, 0.991400f,0.130500f,-0.000000f, 0.708334f,0.992938f},
{ -0.795526f,0.000001f,-0.021814f, 0.991400f,0.130500f,-0.000000f, 0.708334f,0.169846f},
{ -0.768419f,-0.205895f,-0.021814f, 0.991400f,0.130500f,-0.000000f, 0.666667f,0.169846f},
{ -0.768419f,-0.205895f,-0.478336f, 0.991400f,0.130500f,-0.000000f, 0.666667f,0.992938f},
{ -0.768419f,-0.205895f,-0.478336f, 0.923900f,0.382700f,-0.000000f, 0.666667f,0.992938f},
{ -0.688946f,-0.397760f,-0.021814f, 0.923900f,0.382700f,-0.000000f, 0.625001f,0.169846f},
{ -0.688946f,-0.397760f,-0.478336f, 0.923900f,0.382700f,-0.000000f, 0.625001f,0.992938f},
{ -0.768419f,-0.205895f,-0.021814f, 0.923900f,0.382700f,-0.000000f, 0.666667f,0.169846f},
{ -0.688946f,-0.397760f,-0.478336f, 0.793400f,0.608800f,-0.000000f, 0.625001f,0.992938f},
{ -0.688946f,-0.397760f,-0.021814f, 0.793400f,0.608800f,-0.000000f, 0.625001f,0.169846f},
{ -0.562523f,-0.562518f,-0.021814f, 0.793400f,0.608800f,-0.000000f, 0.583334f,0.169846f},
{ -0.562523f,-0.562518f,-0.478336f, 0.793400f,0.608800f,-0.000000f, 0.583334f,0.992938f},
{ -0.562523f,-0.562518f,-0.478336f, 0.608800f,0.793400f,-0.000000f, 0.583334f,0.992938f},
{ -0.397765f,-0.688941f,-0.021814f, 0.608800f,0.793400f,-0.000000f, 0.541668f,0.169846f},
{ -0.397765f,-0.688941f,-0.478336f, 0.608800f,0.793400f,-0.000000f, 0.541668f,0.992938f},
{ -0.562523f,-0.562518f,-0.021814f, 0.608800f,0.793400f,-0.000000f, 0.583334f,0.169846f},
{ -0.397765f,-0.688941f,-0.478336f, 0.382700f,0.923900f,-0.000000f, 0.541668f,0.992938f},
{ -0.397765f,-0.688941f,-0.021814f, 0.382700f,0.923900f,-0.000000f, 0.541668f,0.169846f},
{ -0.205900f,-0.768414f,-0.021814f, 0.382700f,0.923900f,-0.000000f, 0.500001f,0.169846f},
{ -0.205900f,-0.768414f,-0.478336f, 0.382700f,0.923900f,-0.000000f, 0.500001f,0.992938f},
{ -0.205900f,-0.768414f,-0.478336f, 0.130500f,0.991400f,-0.000000f, 0.500001f,0.992938f},
{ -0.000004f,-0.795521f,-0.021814f, 0.130500f,0.991400f,-0.000000f, 0.458335f,0.169846f},
{ -0.000004f,-0.795521f,-0.478336f, 0.130500f,0.991400f,-0.000000f, 0.458335f,0.992938f},
{ -0.205900f,-0.768414f,-0.021814f, 0.130500f,0.991400f,-0.000000f, 0.500001f,0.169846f},
{ -0.000004f,-0.795521f,-0.478336f, -0.130500f,0.991400f,-0.000000f, 0.458335f,0.992938f},
{ -0.000004f,-0.795521f,-0.021814f, -0.130500f,0.991400f,-0.000000f, 0.458335f,0.169846f},
{ 0.205892f,-0.768414f,-0.021814f, -0.130500f,0.991400f,-0.000000f, 0.416668f,0.169846f},
{ 0.205892f,-0.768414f,-0.478336f, -0.130500f,0.991400f,-0.000000f, 0.416668f,0.992938f},
{ 0.205892f,-0.768414f,-0.478336f, -0.382700f,0.923900f,-0.000000f, 0.416668f,0.992938f},
{ 0.397757f,-0.688941f,-0.021814f, -0.382700f,0.923900f,-0.000000f, 0.375001f,0.169846f},
{ 0.397757f,-0.688941f,-0.478336f, -0.382700f,0.923900f,-0.000000f, 0.375001f,0.992938f},
{ 0.205892f,-0.768414f,-0.021814f, -0.382700f,0.923900f,-0.000000f, 0.416668f,0.169846f},
{ 0.397757f,-0.688941f,-0.478336f, -0.608800f,0.793400f,-0.000000f, 0.375001f,0.992938f},
{ 0.397757f,-0.688941f,-0.021814f, -0.608800f,0.793400f,-0.000000f, 0.375001f,0.169846f},
{ 0.562515f,-0.562518f,-0.021814f, -0.608800f,0.793400f,-0.000000f, 0.333334f,0.169846f},
{ 0.562515f,-0.562518f,-0.478336f, -0.608800f,0.793400f,-0.000000f, 0.333334f,0.992938f},
{ 0.562515f,-0.562518f,-0.478336f, -0.793400f,0.608800f,-0.000000f, 0.333334f,0.992938f},
{ 0.688938f,-0.397760f,-0.021814f, -0.793400f,0.608800f,-0.000000f, 0.291667f,0.169846f},
{ 0.688938f,-0.397760f,-0.478336f, -0.793400f,0.608800f,-0.000000f, 0.291667f,0.992938f},
{ 0.562515f,-0.562518f,-0.021814f, -0.793400f,0.608800f,-0.000000f, 0.333334f,0.169846f},
{ 0.688938f,-0.397760f,-0.478336f, -0.923900f,0.382700f,-0.000000f, 0.291667f,0.992938f},
{ 0.688938f,-0.397760f,-0.021814f, -0.923900f,0.382700f,-0.000000f, 0.291667f,0.169846f},
{ 0.768411f,-0.205895f,-0.021814f, -0.923900f,0.382700f,-0.000000f, 0.250001f,0.169846f},
{ 0.768411f,-0.205895f,-0.478336f, -0.923900f,0.382700f,-0.000000f, 0.250001f,0.992938f},
{ 0.768411f,-0.205895f,-0.478336f, -0.991400f,0.130500f,-0.000000f, 0.250001f,0.992938f},
{ 0.795518f,0.000001f,-0.021814f, -0.991400f,0.130500f,-0.000000f, 0.208334f,0.169846f},
{ 0.795518f,0.000001f,-0.478336f, -0.991400f,0.130500f,-0.000000f, 0.208334f,0.992938f},
{ 0.768411f,-0.205895f,-0.021814f, -0.991400f,0.130500f,-0.000000f, 0.250001f,0.169846f}
};
const WORD kickerHoleIndices[288]=
{
	0, 1, 2,
	3, 1, 0,
	4, 5, 6,
	7, 5, 4,
	8, 9, 10,
	11, 9, 8,
	12, 13, 14,
	12, 14, 15,
	16, 17, 18,
	19, 17, 16,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	27, 25, 24,
	28, 29, 30,
	28, 30, 31,
	32, 33, 34,
	35, 33, 32,
	36, 37, 38,
	36, 38, 39,
	40, 41, 42,
	43, 41, 40,
	44, 45, 46,
	44, 46, 47,
	48, 49, 50,
	51, 49, 48,
	52, 53, 54,
	52, 54, 55,
	56, 57, 58,
	59, 57, 56,
	60, 61, 62,
	60, 62, 63,
	64, 65, 66,
	67, 65, 64,
	68, 69, 70,
	68, 70, 71,
	72, 73, 74,
	75, 73, 72,
	76, 77, 78,
	76, 78, 79,
	80, 81, 82,
	83, 81, 80,
	84, 85, 86,
	84, 86, 87,
	88, 89, 90,
	91, 89, 88,
	92, 93, 94,
	92, 94, 95,
	96, 97, 98,
	96, 98, 99,
	100, 101, 102,
	101, 100, 103,
	104, 105, 106,
	106, 107, 104,
	108, 109, 110,
	109, 108, 111,
	112, 113, 114,
	113, 112, 115,
	116, 117, 118,
	117, 116, 119,
	120, 121, 122,
	122, 123, 120,
	124, 125, 126,
	125, 124, 127,
	128, 129, 130,
	130, 131, 128,
	132, 133, 134,
	133, 132, 135,
	136, 137, 138,
	138, 139, 136,
	140, 141, 142,
	141, 140, 143,
	144, 145, 146,
	146, 147, 144,
	148, 149, 150,
	149, 148, 151,
	152, 153, 154,
	154, 155, 152,
	156, 157, 158,
	157, 156, 159,
	160, 161, 162,
	162, 163, 160,
	164, 165, 166,
	165, 164, 167,
	168, 169, 170,
	170, 171, 168,
	172, 173, 174,
	173, 172, 175,
	176, 177, 178,
	178, 179, 176,
	180, 181, 182,
	181, 180, 183,
	184, 185, 186,
	186, 187, 184,
	188, 189, 190,
	189, 188, 191
};
