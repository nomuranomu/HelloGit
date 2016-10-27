#include "GameCharacter.h"

int main (int argc, char const* argv[])
{
	GameCharacter hero("Hero", 20, 5); //スタック領域にゲーキャラインスタンスを1つ生成
	hero.showStatus();
	
	GameCharacter miniDragon("MiniDragon", 8, 2);
	miniDragon.showStatus();
	
	return 0;
}

