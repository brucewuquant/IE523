// k_hanoi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// Written by Prof. Sreenivas for IE523: Financial Computing
// homework by dizhouw2 written in Visual Studio thus the "pch.h"
#include "pch.h"
#include "k_hanoi_dizhouw2.h"


#include <iostream>


int main(int argc, char * const argv[])
{
	int no_of_disks, no_of_pegs;

	// See 'k_hanoi_dizhouw2.h' for the Towers class definition
	Towers x;

	std::cout << "Number of pegs? ";
	std::cin >> no_of_pegs;
	std::cout << "Number of disks? ";
	std::cin >> no_of_disks;

	x.solve(no_of_pegs, no_of_disks);
}
