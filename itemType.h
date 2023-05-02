#ifndef __ITEMTYPE_H
#define __ITEMTYPE_H

#include <iostream>
#include <vector>
#include <string>

class itemType {
public:
	enum Position { START, AFTER_FIRST, AFTER_SECOND, AFTER_THIRD };
	itemType(int n, int y, Position pos) : n(n), y(y), pos(pos) {}
	int getn() { return n; }
	int gety() { return y; }
	void setPos(Position pos) { this->pos = pos; }
	void setn(int n) { this->n = n; }
	void sety(int y) { this->y = y; }
	Position getPos() { return pos; }
private:
	int n, y;
	Position pos;
};



#endif !__ITEMTYPE_H
