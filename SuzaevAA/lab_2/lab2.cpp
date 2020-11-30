#include <iostream>
#include <cmath>
#include <ctime>
const int Razmer = 8;
int main()
{
    srand(time(NULL));
    //vvod massiva
    int Massive[Razmer];
    for (int i = 0; i < Razmer; i++)
    {
        Massive[i] = rand() % 100 - 70;
        std::cout << "Massive[" << i+1 << "] = "<< Massive[i]<<std::endl;
    }
    //sortirovka massiva
    int counter1 = 0;
    int counter2 = 0;
    while ( counter2 < Razmer)
    {
            while (counter1 < Razmer-1)
            {
                if (Massive[counter1] > Massive[counter1 + 1])
                {
                    int kase = Massive[counter1];
                    Massive[counter1] = Massive[counter1 + 1];
                    Massive[counter1 + 1] = kase;
                }
                counter1++;
            }
        counter1 = 0;
        counter2++;
    }

    //vivod sortirovannogo massiva
    std::cout << "Sort" << std::endl;
    for (int i = 0; i < Razmer; i++)
    {
        std::cout << "Massive[" << i + 1 << "] = " << Massive[i] << std::endl;;
    }

    //kolichestvo nechet el
    float j = 0;
    for (int i = 0; i < Razmer; i++)
    {
        if (abs(Massive[i] % 2 )== 1)
            j++;
    }
    //nechet massive 
    int Massive1[Razmer];
    int count1 = 0;
    float Summa=0;
    for (int i = 0; i < Razmer; i++)
    {
        if (abs(Massive[i] % 2) == 1)
        {
            Massive1[count1] = Massive[i];
            count1++;
            Summa += Massive[i];
        }
    }
    //vivod nechet massive
    std::cout << "nechet massive: " << std::endl;
    for (int i = 0; i < j; i++)
    {
        std::cout << "Massive1["<< i+1<< "] = " << Massive1[i] << std::endl ;
    }
    std::cout << std::endl;

    std::cout << "Max = " << Massive1[count1 - 1] << std::endl;
    std::cout << "Min = " << Massive1[0] <<std::endl;
    std::cout << "Srednee = " << Summa/j;
}
