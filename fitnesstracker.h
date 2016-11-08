#ifndef FITNESSTRACKER_H
#define FITNESSTRACKER_H



class fitnessTracker
{
        public:
				float weight, height, age, protein, carbohydrate, fat;
				float bmr = 0;

                void calculateMetabolism();
                void calculateMacros();
                void printInformation();
				void weightManagement();

				



};































#endif // FITNESSTRACKER_H
