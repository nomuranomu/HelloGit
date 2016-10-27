#include "GameCharacter.h"
#include <iostream>

GameCharacter::GameCharacter(std::string name, int hp, int mp)
: m_name(name), m_hp(hp), m_mp(mp)
{
}

void GameCharacter::showStatus()
{
	std::cout << "----------" << std::endl;
	std::cout << "Name:" << m_name << std::endl;
	std::cout << "HP:" << m_hp << std::endl;
	std::cout << "MP:" << m_mp << std::endl;
}

