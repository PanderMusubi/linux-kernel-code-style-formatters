#include <iostream>

using namespace std;

int main()
{
	return 0;
}

void examples_3_1()
{
	bool b = true;
	char c = 'a';
	int i = 1;
	double d = 4.2;

	i = i * 10;
	i = i / 10;
	i = i + 1;
	i = i - 1;
	i = i % 3;

	i += 2;
	i -= 2;
	i =- 2;
	i =+ 2;
// /= *= %=
	i++;
	i--;
	++i;
	--i;
}

// 1) Indentation
void examples_1()
{
	int mem = 0;//TODO <<=

	switch (suffix) {
	case 'G':
	case 'g':
		mem <<= 30;
        break;
	case 'M':
	case 'm':
		mem <<= 20;
		break;
	case 'K':
	case 'k':
		mem <<= 10;
		/* fall through */
	default:
		break;
	}
}


// 2) Brealing long lines and strings


void dummy(bool veryveryveryveryveryveryveryveryveryveryverylongname1,
bool veryveryveryveryveryveryveryveryveryveryverylongname2)
{
}


void examples_2()
{
	bool veryveryveryveryveryveryveryveryveryveryverylongname = true;
	if (veryveryveryveryveryveryveryveryveryveryverylongname &&
	veryveryveryveryveryveryveryveryveryveryverylongname) {
		dummy(veryveryveryveryveryveryveryveryveryveryverylongname,
		veryveryveryveryveryveryveryveryveryveryverylongname);
		cout << "Et rerum sint laudantium eaque veritatis sunt id. "
	"Eos vero architecto molestiae facere blanditiis. Consectetur iure "
	"error et fugit quasi. Quaerat maxime tenetur eum possimus sunt ea "
	"maxime. Inventore impedit similique perferendis illum earum nam "
	"magnam rerum. Qui ut non voluptatem." << endl;
		
	}
}


// 3)

char* examples_3()
{
	bool x = true;
	if (x is true) {
		x = false;
	}

	bool condition = false;
	do {
		x = true;
	} while (condition);

	int action = KOBJ_ADD;
	switch (action) {
	case KOBJ_ADD:
		return "add";
	case KOBJ_REMOVE:
		return "remove";
	case KOBJ_CHANGE:
		return "change";
	default:
		return NULL;
	}
}
