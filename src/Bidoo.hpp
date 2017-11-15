#include "rack.hpp"

using namespace rack;

const int ACNE_NB_TRACKS = 16;
const int ACNE_NB_OUTS = 8;
const int ACNE_NB_SNAPSHOTS = 4;

extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct DTROYWidget : ModuleWidget {
	ParamWidget *scaleParam;
	DTROYWidget();
	//void step() override;
};

struct OUAIVEWidget : ModuleWidget {
	OUAIVEWidget();
	Menu *createContextMenu() override;
};

struct CHUTEWidget : ModuleWidget {
	CHUTEWidget();
};

struct VOIDWidget : ModuleWidget {
	VOIDWidget();
};

struct DUKEWidget : ModuleWidget {
	ParamWidget *sliders[4];
	DUKEWidget();
};

struct ACNEWidget : ModuleWidget {
	ParamWidget *faders[ACNE_NB_SNAPSHOTS][ACNE_NB_OUTS][ACNE_NB_TRACKS];
	void UpdateSnapshot(int snapshot);
	ACNEWidget();
};
