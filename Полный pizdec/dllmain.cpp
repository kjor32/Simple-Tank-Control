#include "main.h"

AsiPlugin::AsiPlugin() {
	memwrapper::fill_memory((void*)0x6AED0E, 0x90, 6);//быстрая бах бах
	
	
	memwrapper::write_memory<float>(memwrapper::read_memory<uint32_t>(0x6AEAED + 2), 2000);//башня танка

	memwrapper::write_memory<float>(memwrapper::read_memory<uint32_t>(0x6AEECC + 2), 0);//отдача при выстреле
}



AsiPlugin::~AsiPlugin() {

	memwrapper::write_memory<uint8_t>((void*)0x6AED0E, 0x81);
	memwrapper::write_memory<uint8_t>((void*)0x6AED0F, 0xC2);
	memwrapper::write_memory<uint8_t>((void*)0x6AED10, 0x20);
	memwrapper::write_memory<uint8_t>((void*)0x6AED11, 0x03);
	memwrapper::write_memory<uint8_t>((void*)0x6AED12, 0x00);
	memwrapper::write_memory<uint8_t>((void*)0x6AED13, 0x00);

	memwrapper::write_memory<float>(memwrapper::read_memory<uint32_t>(0x6AEAED + 2), 0.015);//башня танка

	memwrapper::write_memory<float>(memwrapper::read_memory<uint32_t>(0x6AEECC + 2), -0.1);//отдача при выстреле
	
}