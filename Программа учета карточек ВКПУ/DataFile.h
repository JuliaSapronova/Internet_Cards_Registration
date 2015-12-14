#include "stdafx.h"
#pragma once

class DataFile	//класс для записи текущей информации для администратора в файл
{
private:
	int all;										//общее количество карточек
	int difNom;										//количество различных номиналов
	string* nominals;								//массив доступных номиналов
	int* numNominals;								//количество карточек с номиналом каждого значения	
public: 
	DataFile();
	bool exist(string);
	void giveCard(string);
	void saveChanges();
	string* getNominals();
	int getAll();
	int getDifNominals();
};