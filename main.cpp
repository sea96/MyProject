/*
 * 自大二下开始接触VC++之后，本人一直渴望制作一个可视化的程序，
 * 但是MFC的开发太慢而且过时，机缘巧合下寻到Qt，并有Qt编写象棋游戏实例教程，
 * 并且同时本人见证alphago人工智能击败李世石九段，体现了人工智能的强大，有学习的必要
 * 故此在2016年3月5日起，利用课余时间学习并编写象棋游戏，希望能在毕业之前做出功能丰富，界面漂亮的C++应用软件
 *
 * 2016年3月19日 更新：1.完成判断棋子是否可以移动
 * 2016年3月22日 更新：1.规范化画棋盘的函数
 * 2016年3月25日 更新：1.规范化画棋子的函数 2.鼠标左击移动棋子(BUG！)
 * 2016年3月26日 更新：1.修复鼠标左击移动棋子的bug 2.兵的移动(未解决)
*/
#include <QApplication>
#include "board.h"
#include "singlegame.h"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	Board board;
    //SingleGame board;
    board.show();

	return app.exec();
}
