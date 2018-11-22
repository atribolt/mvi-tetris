#ifndef NUMERICLABAL_H
#define NUMERICLABAL_H

#pragma once

#include "NumericStorage.h"
#include <SFML/Graphics.hpp>

/*
	����� NumericLabel
	������ ����� � ��������� ���� � ������� �� ����� ��������� �� ���������
*/
class NumericLabel
{
public:
	NumericLabel();
	~NumericLabel();

	//���������� ��������� �� ���������
	void setStorage(NumericStorage *storage) { _storage = storage;  }
	void setPosition(sf::Vector2f position) { _position = position;  };
	void setSize(int size) { _size = size; };
	void setValue( int value );

	void Draw( sf::RenderWindow *window);

private:
	NumericStorage *_storage; 

	int _size;
	std::vector<int> _symbols;
	sf::Vector2f _position;

};


#endif //NUMERICLABAL_H