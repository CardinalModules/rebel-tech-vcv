#include "plugin.hpp"


Plugin* pluginInstance;


void init(Plugin* p) {
	pluginInstance = p;

	// Add modules here
	p->addModel(modelStoicheia);
	p->addModel(modelTonic);
	p->addModel(modelKlasmata);
}