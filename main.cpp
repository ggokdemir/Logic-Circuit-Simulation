#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

/**
 *	Gurkan Gokdemir
 *
 *	2018
 */

bool anotherFileExists = false;

char output;
char inputOne;
char inputTwo;

std::string mainInputs;
char mainOutput = 0;

char outputAND;
char inputOneAND;
char inputTwoAND;

char outputOR;
char inputOneOR;
char inputTwoOR;

char outputXOR;
char inputOneXOR;
char inputTwoXOR;

char outputNOT;
char inputOneNOT;

char outputNAND;
char inputOneNAND;
char inputTwoNAND;

char outputNOR;
char inputOneNOR;
char inputTwoNOR;

char a, b, c, d, e, f, k, l, m;


bool detectAlpha(std::string token) {
	if (isalpha(token[0]) && islower(token[0]))
	{
		return true;
	}
	return false;
}

void gateAND(char output, char inputOne, char inputTwo) {

	outputAND = output;
	inputOneAND = inputOne;
	inputTwoAND = inputTwo;

}
void gateOR(char output, char inputOne, char inputTwo) {
	outputOR = output;
	inputOneOR = inputOne;
	inputTwoOR = inputTwo;

}
void gateXOR(char output, char inputOne, char inputTwo) {
	outputXOR = output;
	inputOneXOR = inputOne;
	inputTwoXOR = inputTwo;

}
void gateNOT(char output, char inputOne) {
	outputNOT = output;
	inputOneNOT = inputOne;

}
void gateNAND(char output, char inputOne, char inputTwo) {
	outputNAND = output;
	inputOneNAND = inputOne;
	inputTwoNAND = inputTwo;

}
void gateNOR(char output, char inputOne, char inputTwo) {
	outputNOR = output;
	inputOneNOR = inputOne;
	inputTwoNOR = inputTwo;

}


void loadAnotherFile() {

	using namespace std;

	ifstream infile;

	//infile.open("devre2-parcali/baska_dosya.txt");
	infile.open("devre4-parcali-sure-ayni/baska_dosya.txt");

	std::string line;
	std::string partial;

	std::vector<std::string> tokens;

	char output = 0, inputOne = 0, inputTwo = 0;

	std::cout << "\t";
	while (std::getline(infile, line)) {     // '\n' is the default delimiter
		std::istringstream iss(line);
		std::string token;

		std::cout << line;

		std::cout << " \n";
		std::getline(iss, token, '\t');
		tokens.push_back(token);

		if (token == ".giris")
		{

			do {
				std::getline(iss, token, '\t');

				if (token[0] == '#')
				{
					break;
				}
				else
				{
					mainInputs.push_back(token[0]);	//

				}
			} while (detectAlpha(token));
		}
		if (token == ".cikis")
		{
			std::getline(iss, token, '\t');
			if (detectAlpha(token))
			{
				mainOutput = token[0];
				std::getline(iss, token, '\t');
			}
			if (token[0] == '#')
			{
				std::getline(iss, token, '\t');
			}
		}
		if (token == ".kapi")	//AND, OR, XOR, NOT, NAND, NOR
		{
			std::getline(iss, token, '\t');
			if (token == "AND")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateAND(output, inputOne, inputTwo);
			}
			if (token == "OR")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateOR(output, inputOne, inputTwo);
			}
			if (token == "XOR")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateXOR(output, inputOne, inputTwo);
			}
			if (token == "NOT")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateNOT(output, inputOne);
			}
			if (token == "NAND")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateNAND(output, inputOne, inputTwo);
			}
			if (token == "NOR")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateNOR(output, inputOne, inputTwo);
			}
		}
		if (token == ".son")
		{
		}




	}
	std::cout << "\n";
	infile.close();

}

void loadTheCircuit() {
	using namespace std;

	ifstream infile;
	//infile.open("devre1-tum/devre.txt");
	//infile.open("devre2-parcali/devre.txt");
	//infile.open("devre3-sure-ayni/devre.txt");
	infile.open("devre4-parcali-sure-ayni/devre.txt");
	//infile.open("devre5-uc-giris/devre.txt");

	std::string line;
	std::string partial;

	std::vector<std::string> tokens;

	char output = 0, inputOne = 0, inputTwo = 0;

	std::cout << "\t";
	while (std::getline(infile, line)) {     // '\n' is the default delimiter
		std::istringstream iss(line);
		std::string token;

		std::cout << line;

		std::cout << " \n";
		std::getline(iss, token, '\t');
		tokens.push_back(token);
		if (token == ".include")
		{
			anotherFileExists = true;
			loadAnotherFile();
		}
		if (token == ".giris")
		{

			do {
				std::getline(iss, token, '\t');

				if (token[0] == '#')
				{
					break;
				}
				else
				{
					mainInputs.push_back(token[0]);	//

				}
			} while (detectAlpha(token));
		}
		if (token == ".cikis")
		{
			std::getline(iss, token, '\t');
			if (detectAlpha(token))
			{
				mainOutput = token[0];
				std::getline(iss, token, '\t');
			}
			if (token[0] == '#')
			{
				std::getline(iss, token, '\t');
			}
		}
		if (token == ".kapi")	//AND, OR, XOR, NOT, NAND, NOR
		{
			std::getline(iss, token, '\t');
			if (token == "AND")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateAND(output, inputOne, inputTwo);
			}
			if (token == "OR")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateOR(output, inputOne, inputTwo);
			}
			if (token == "XOR")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateXOR(output, inputOne, inputTwo);
			}
			if (token == "NOT")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateNOT(output, inputOne);
			}
			if (token == "NAND")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateNAND(output, inputOne, inputTwo);
			}
			if (token == "NOR")
			{
				std::getline(iss, token, '\t');
				std::getline(iss, token, '\t');
				if (detectAlpha(token))
				{
					//its output of the gate
					output = token[0];
					std::getline(iss, token, '\t');
					if (detectAlpha(token))
					{
						//input one
						inputOne = token[0];
						std::getline(iss, token, '\t');
						if (detectAlpha(token))
						{
							//input two
							inputTwo = token[0];
							std::getline(iss, token, '\t');
						}
						else
						{
							std::cout << ("Wrong file format: There is no alpha four token after the gate name. \n ");
							std::getline(iss, token, '\t');
						}
					}
					else
					{
						std::cout << ("Wrong file format: There is no alpha tree token after the gate name. \n ");
						std::getline(iss, token, '\t');
					}

				}
				else
				{
					std::cout << ("Wrong file format: There is no alpha two token after the gate name. \n ");
					std::getline(iss, token, '\t');
				}
				gateNOR(output, inputOne, inputTwo);
			}
		}
		if (token == ".son")
		{
		}




	}
	std::cout << "\n";
	infile.close();

}

void loadTheValuesOfCircuit() {
	using namespace std;

	ifstream infile;
	//infile.open("devre1-tum/deger.txt");
	//infile.open("devre2-parcali/deger.txt");
	//infile.open("devre3-sure-ayni/deger.txt");
	infile.open("devre4-parcali-sure-ayni/deger.txt");
	//infile.open("devre5-uc-giris/deger.txt");

	std::string line;
	std::string partial;

	std::vector<std::string> tokens;

	while (std::getline(infile, line)) {     // '\n' is the default delimiter

		std::istringstream iss(line);
		std::string token;
		std::cout << "\n";
		std::getline(iss, token, '\t');  // but we can specify a different one
		tokens.push_back(token);
		std::cout << token + "\t";
		if (token[0] == 'a')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			a = token[0];
		}
		if (token[0] == 'b')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			b = token[0];
		}
		if (token[0] == 'c')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			c = token[0];
		}
		if (token[0] == 'd')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			d = token[0];
		}
		if (token[0] == 'e')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			e = token[0];
		}
		if (token[0] == 'f')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			f = token[0];
		}
		if (token[0] == 'k')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			k = token[0];
		}
		if (token[0] == 'l')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			l = token[0];
		}
		if (token[0] == 'm')
		{
			std::getline(iss, token, '\t');
			std::cout << token + "\t";
			m = token[0];
		}

	}
	std::cout << "\n";
	infile.close();
}

void sendOneToPin(char pinName) {

	if (pinName == 'a')
	{
		a = '1';
	}
	if (pinName == 'b')
	{
		b = '1';
	}
	if (pinName == 'c')
	{
		c = '1';
	}
	if (pinName == 'd')
	{
		d = '1';
	}
	if (pinName == 'e')
	{
		e = '1';
	}
	if (pinName == 'f')
	{
		f = '1';
	}
	if (pinName == 'k')
	{
		k = '1';
	}
	if (pinName == 'l')
	{
		l = '1';
	}
	if (pinName == 'm')
	{
		m = '1';
	}
}

void sendZeroToPin(char pinName) {
	if (pinName == 'a')
	{
		a = '0';
	}
	if (pinName == 'b')
	{
		b = '0';
	}
	if (pinName == 'c')
	{
		c = '0';
	}
	if (pinName == 'd')
	{
		d = '0';
	}
	if (pinName == 'e')
	{
		e = '0';
	}
	if (pinName == 'f')
	{
		f = '0';
	}
	if (pinName == 'k')
	{
		k = '0';
	}
	if (pinName == 'l')
	{
		l = '0';
	}
	if (pinName == 'm')
	{
		m = '0';
	}
}

void simulateTheCirciut() {
	std::cout << "\n Output of the circuit is : " << f << " \n";
}

void showThePinsValue(char pinName) {

	if (pinName == 'a')
	{
		std::cout << "a = " << a << " \n";
	}
	if (pinName == 'b')
	{
		std::cout << "b = " << b << " \n";
	}
	if (pinName == 'c')
	{
		std::cout << "c = " << c << " \n";
	}
	if (pinName == 'd')
	{
		std::cout << "d = " << d << " \n";
	}
	if (pinName == 'e')
	{
		std::cout << "e = " << e << " \n";
	}
	if (pinName == 'f')
	{
		std::cout << "f = " << f << " \n";
	}

	if (pinName == 'k')
	{
		std::cout << "k = " << k << " \n";
	}
	if (pinName == 'l')
	{
		std::cout << "l = " << l << " \n";
	}
	if (pinName == 'm')
	{
		std::cout << "m = " << m << " \n";
	}


	if (pinName == '*')
	{
		std::cout << "a = " << a << " \n";

		std::cout << "b = " << b << " \n";

		std::cout << "c = " << c << " \n";

		std::cout << "d = " << d << " \n";

		std::cout << "e = " << e << " \n";

		std::cout << "f = " << f << " \n";

		std::cout << "k = " << k << " \n";

		std::cout << "l = " << l << " \n";

		std::cout << "m = " << m << " \n";


	}
}

void automatedMain(char autoCommand) {

	enum Status {
		Y = 'Y',	//Loads the circuit from "devre.txt"
		I = 'I',	//Gets the details of the circuit from "deger.txt"
		H = 'H',	//Sets the pin to 1
		L = 'L',	//Sets the pin to 0
		S = 'S',	//Do a simulation
		G = 'G',	//Show the value of the pin (press * for all pins)
		K = 'K',	//Runs commands from "komut.txt"
		C = 'C'		//Exit
	};
	bool loadLoop = true;
	char menuInput;
	Status status;


	while (loadLoop)
	{
		menuInput = autoCommand;
		status = (Status)menuInput;

		if (status == Y)
		{
			std::cout << " Y command running ... \n";
			loadTheCircuit();
			loadLoop = false;
		}
		if (status == I)
		{
			std::cout << " I command running ... \n";
			loadTheValuesOfCircuit();
			loadLoop = false;
		}
		if (status == S)
		{
			std::cout << " S command running ... \n";
			simulateTheCirciut();
			loadLoop = false;
		}
		if (status == C)
		{
			std::cout << " C command running ... \n";
			loadLoop = false;
		}
	}
}

void automatedMain(char autoCommand, char pin) {
	enum Status {
		Y = 'Y',	//Loads the circuit from "devre.txt"
		I = 'I',	//Gets the details of the circuit from "deger.txt"
		H = 'H',	//Sets the pin to 1
		L = 'L',	//Sets the pin to 0
		S = 'S',	//Do a simulation
		G = 'G',	//Show the value of the pin (press * for all pins)
		K = 'K',	//Runs commands from "komut.txt"
		C = 'C'		//Exit
	};
	bool menuLoop = true;
	char menuInput;
	Status status;

	while (menuLoop)
	{
		menuInput = autoCommand;
		status = (Status)menuInput;


		char selectThePin;
		if (status == H)
		{
			std::cout << " H command running ... \n";
			selectThePin = pin;
			sendOneToPin(selectThePin);
			menuLoop = false;
		}
		if (status == L)
		{
			std::cout << " L command running ... \n";
			selectThePin = pin;
			sendZeroToPin(selectThePin);
			menuLoop = false;
		}

		if (status == G)
		{
			std::cout << " G command running ... \n";
			selectThePin = pin;
			showThePinsValue(selectThePin);
			menuLoop = false;
		}
	}
}

void runCommandsFromFile() {

	using namespace std;

	ifstream infile;

	infile.open("devre5-uc-giris/komut1.txt");

	std::string line;
	std::string partial;

	std::vector<std::string> tokens;

	while (std::getline(infile, line)) {     // '\n' is the default delimiter

		std::istringstream iss(line);
		std::string token;
		std::cout << "\n";
		std::getline(iss, token, '\t');  // but we can specify a different one
		tokens.push_back(token);
		std::cout << token + "\t";
		if (token[0] == 'Y')
		{
			automatedMain(token[0]);
		}
		if (token[0] == 'I')
		{
			automatedMain(token[0]);
		}
		if (token[0] == 'H')
		{
			char tkn = token[0];
			std::getline(iss, token, '\t');
			automatedMain(tkn, token[0]);

		}
		if (token[0] == 'L')
		{
			char tkn = token[0];
			std::getline(iss, token, '\t');
			automatedMain(tkn, token[0]);
		}
		if (token[0] == 'S')
		{
			automatedMain(token[0]);
		}
		if (token[0] == 'G')
		{
			char tkn = token[0];
			std::getline(iss, token, '\t');
			automatedMain(tkn, token[0]);
		}
		if (token[0] == 'C')
		{
			automatedMain(token[0]);
		}

	}
	std::cout << "\n";
	infile.close();

}


int main() {

	std::cout << "	Wecome to Logic Circuit Simulation \n";
	std::cout << " This application reads devre.txt \n";

	enum Status {
		Y = 'Y',	//Loads the circuit from "devre.txt"
		I = 'I',	//Gets the details of the circuit from "deger.txt"
		H = 'H',	//Sets the pin to 1
		L = 'L',	//Sets the pin to 0
		S = 'S',	//Do a simulation
		G = 'G',	//Show the value of the pin (press * for all pins)
		K = 'K',	//Runs commands from "komut.txt"
		C = 'C'		//Exit
	};
	bool loadLoop = true;
	bool menuLoop = false;
	bool loadTheCircuitCheck = false;
	bool loadTheValuesOfCircuitCheck = false;
	char menuInput;
	Status status;


	while (loadLoop)
	{
		std::cout << " ==================================================================\n"
			<< " Y,	Loads the circuit from devre.txt \n"
			<< " I,	Gets the details of the circuit from deger.txt \n"
			<< " ==================================================================\n"
			<< " >";

		std::cin >> menuInput;
		status = (Status)menuInput;

		if (status == Y)
		{
			loadTheCircuit();
			loadTheCircuitCheck = true;
			if (loadTheCircuitCheck && loadTheValuesOfCircuitCheck)
			{
				loadLoop = false;
				menuLoop = true;
			}
			else
			{
				std::cout << "Please load the circuit values. Press I \n";
			}
		}
		if (status == I)
		{
			loadTheValuesOfCircuit();
			if (loadTheCircuitCheck)
			{
				loadTheValuesOfCircuitCheck = true;
			}
			if (loadTheCircuitCheck && loadTheValuesOfCircuitCheck)
			{
				loadLoop = false;
				menuLoop = true;
			}
			else
			{
				std::cout << "Please load the circuit. Press Y \n";
			}
		}


	}


	while (menuLoop)
	{
		std::cout << " ==================================================================\n"
			<< " H,	Sets the pin to 1 \n"
			<< " L,	Sets the pin to 0 \n"
			<< " S,	Do a simulation \n"
			<< " G,	Show the value of the pin (press * for all pins)\n"
			<< " K,	Runs commands from komut.txt \n"
			<< " C,	Exit \n"
			<< " ==================================================================\n"
			<< " >";

		std::cin >> menuInput;
		status = (Status)menuInput;


		char selectThePin;
		if (status == H)
		{
			std::cout << "Please insert pin name to set logic one (5V) : \n" << ">";
			std::cin >> selectThePin;
			sendOneToPin(selectThePin);
		}
		if (status == L)
		{
			std::cout << "Please insert pin name to set logic zero (0V) : \n" << ">";
			std::cin >> selectThePin;
			sendZeroToPin(selectThePin);
		}
		if (status == S)
		{
			simulateTheCirciut();
		}
		if (status == G)
		{
			std::cout << "Please insert pin name to show the value of the pin: \n" << ">";
			std::cin >> selectThePin;
			showThePinsValue(selectThePin);
		}
		if (status == K)
		{
			std::cout << "These commands run from komut.txt: \n";
			runCommandsFromFile();
		}
		if (status == C)
		{
			menuLoop = false;
		}
	}
	getchar();
	return 0;
}s
