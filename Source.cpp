#include <iostream>
#include <bitset>

using namespace std;

class State
{
public:
	int ID;
	string NowState;
};

class Transition
{
public:
	int NowState;
	string Condition;
	int NextState;

};

class FSM
{
public:
	FSM()
	{
		States[0].ID = 1;
		States[0].NowState = "��ȸ";

		States[1].ID = 2;
		States[1].NowState = "�߰�";

		States[2].ID = 3;
		States[2].NowState = "����";

		States[3].ID = 4;
		States[3].NowState = "����";


		Transitions[0].NowState = 1;
		Transitions[0].Condition = "���߰�";
		Transitions[0].NextState = 2;

		Transitions[1].NowState = 2;
		Transitions[1].Condition = "����ħ";
		Transitions[1].NextState = 1;

		Transitions[2].NowState = 2;
		Transitions[2].Condition = "�����Ÿ�����";
		Transitions[2].NextState = 3;

		Transitions[3].NowState = 3;
		Transitions[3].Condition = "�����Ÿ���Ż";
		Transitions[3].NextState = 2;

		Transitions[4].NowState = 3;
		Transitions[4].Condition = "HP����";
		Transitions[4].NextState = 4;
	}

	State States[4];
	Transition Transitions[5];

	State Transit(State InState, string Condition)
	{
		return States[0];
	}
};

int Map[10][10];

class Engine
{
public:
	World MyWorld;

	void Run()
	{
		while (true)
		{
			Input();
			Tick();
			Render();
		}
	}
	void Input();
	void Tick();
	void Render();
};

class World
{
public:
	Wall MyWalls[100];//Worst Case
	Floor MyFloors[100];//Worst Case

	Player MyPlayer;
	Monster MyMonster;

	Goal MyGoal;

	void GameOver();
};

class Wall
{
public:
	void Overlap();//����Ұ�
};

class Floor
{
public:

};

class Player
{
public:
	int CoordX;
	int CoordY;

	void Move();//�����¿�
};

class Monster
{
public:
	int CoordX;
	int CoordY;

	void Move();//�����¿�
};

class Goal
{
public:
	int CoordX;
	int CoordY;
};

int main()
{
	Engine* MyEngine = new Engine();
	MyEngine->Run();

	delete MyEngine;
	MyEngine = nullptr;

	return 0;
}