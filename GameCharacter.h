#ifndef GAME_CHARACTER_H
#define GANE_CHARACTER_H

#include <string>

class GameCharacter {
	public:
		GameCharacter(std::string name, int hp, int mp); //コンストラクタ
		void showStatus(); //メンバ関数
	private:
		std::string m_name;
		int m_hp; //メンバ変数
		int m_mp;
};

#endif // GAME_CHARACTER_H

