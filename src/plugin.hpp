#pragma once
#include <rack.hpp>


using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin* pluginInstance;

// Declare each Model, defined in each module source file
extern Model* modelStoicheia;
extern Model* modelTonic;
extern Model* modelKlasmata;
extern Model* modelCLK;
extern Model* modelLogoi;
extern Model* modelPhoreo;

enum ModuleTheme {
	LIGHT_THEME,
	DARK_THEME,
	NUM_THEMES
};


struct BefacoOutputPort : app::SvgPort {
	BefacoOutputPort() {
		setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/components/BefacoOutputPort.svg")));
	}
};

struct BefacoInputPort : app::SvgPort {
	BefacoInputPort() {
		setSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/components/BefacoInputPort.svg")));
	}
};

struct RebelTechPot : app::SvgKnob {
	widget::SvgWidget* bg;

	RebelTechPot() {
		minAngle = -0.82 * M_PI;
		maxAngle = 0.82 * M_PI;

		bg = new widget::SvgWidget;
		fb->addChildBelow(bg, tw);

		setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Pot.svg")));
		bg->setSvg(Svg::load(asset::plugin(pluginInstance, "res/components/Pot_bg.svg")));
	}
};



struct Davies1900hWhiteKnobSnap : Davies1900hWhiteKnob {
	Davies1900hWhiteKnobSnap() {
		snap = true;
	}
};