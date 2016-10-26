#include "GameCharacter.h"
#include <iostream>

#include "EnergyBottle.h"
#include "MagicBottle.h"

GameCharacter::GameCharacter(std::string name, int hp, int mp)
: m_name(name), m_hp(hp), m_mp(mp)
{
}

void GameCharacter::drink(EnergyBottle *pBottle) //���ނׂ��h�����N�̗ʂ����炤
{
	int energy = pBottle->getEnergy(); 
	m_hp += energy; //�Q�[�L������hp�Ƀh�����N�ʂ𑫂�
}

void GameCharacter::drink(MagicBottle *pBottle)
{
	int magic = pBottle->getMagic();
	m_mp += magic;
}


void GameCharacter::showStatus()
{
	std::cout << "----------" << std::endl;
	std::cout << "Name:" << m_name << std::endl;
	std::cout << "HP:" << m_hp << std::endl;
	std::cout << "MP:" << m_mp << std::endl;
}

