#pragma once

#ifndef DRAGON
#define DRAGON
#include "cocos2d.h"

USING_NS_CC;

#define DRAGONBLUE 1
#define DRAGONBLACK 2

class Dragon
{
public:
	// ���ǵ���ģʽ��Ӧ�ñ����ڳ���������ʵ����������ɫ
	Dragon(int color, Vec2 position);
	
	// ��һ��
	void jump();

	// ����
	void die();

	// �����ƶ���1Ϊ�ϣ�-1Ϊ��
	void move(int dir);

	// ֹͣ
	void stop();

	Sprite *get();

private:
	Sprite * dragon;
	Vector<SpriteFrame*> flying;
};
#endif