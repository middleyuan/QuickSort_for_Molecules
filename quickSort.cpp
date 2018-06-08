#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;
using FormulaToName = map<string, string>;
using FormulaToMass = map<string, double>;
using PeriodicTable = map<string, int>;

class MoleculesSort
{
private:
	string formula;
	string name;
	int mass;
	int member;
	PeriodicTable periodicTable;
	FormulaToName formulaToName;
	FormulaToMass formulaToMass;
	
public:
	MoleculesSort(): member(0), mass(0) {};
	void ReadPeriodicTable()
	{
		ifstream fin;
		fin.open("PeriodicTable.txt");
		while (fin >> formula >> mass)
		{
			periodicTable[formula] = mass;
		}	
	}
	void ReadGroup()
	{
		cin >> member;
		for (int i = 0; i < member; i++)
		{
			cin >> name >> formula >> mass;
			formulaToName[formula] = name;
			formulaToMass[formula] = mass;
		}
	}
	void CalculateMass()
	{
		int mass = 0;
		cin >> formula;
		for (int i = 0; i < formula.size();)
		{
			string temp;
			if (isupper(formula[i]))
			{
				temp += formula[i];
				i++;
				while (!isupper(formula[i]) && i < formula.size())
				{
					temp += formula[i];
					i++;
				}
				mass += periodicTable[temp];
			}
		}
	}
};

int main()
{
	MoleculesSort moleculesSort;
	moleculesSort.ReadPeriodicTable();
	moleculesSort.CalculateMass();
	system("pause");
	return 0;
}