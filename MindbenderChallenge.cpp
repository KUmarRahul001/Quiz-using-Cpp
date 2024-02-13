/* These are preprocessor directives that include header files in the C++ program. */
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

/* These are global variables that will store the user's name, age, and gender after they enter them
during the sign-up process for the quiz game. */
std::string name;
int age;
char gender;

/* The function prompts the user to enter their name, age, and gender for signing up to play a quiz
 game.*/
 
void GetDetail()
{ /* The above code is displaying a welcome message and prompting the user to enter their full name,
 age, and gender. It then reads in the user's input and stores it in the variables "name", "age",
 and "gender". Finally, it displays a message thanking the user for signing up and informing them
 that they can play the game now. */

    std::cout << "    Welcome To Mindbender Challenge Quiz SignUp Page   " << std::endl;
    std::cout << "  Enter Your Full Name (Eg. Rakesh Ranjan): ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << " Enter Your Age: ";
    std::cin >> age;
    std::cout << " Enter Your Gender (M for Male, F for Female, O for Other): ";
    std::cin >> gender;
    std::cout << "Thank You For Signing Up. You Can Play Your Game NOW" << std::endl;
}

/* `void DisplayDetails()` is a function that displays the rules and regulations of the quiz game, as
well as the prize amounts for each question. It is called within the `start()` function of the
`QuizGame` class. */
void DisplayDetails()
{
    std::cout << "  -- Welcome " << name << " To Mindbender Challenge Quiz --" << std::endl;
}

/* `void GameRulesAndRegulation()` is a function that displays the rules and regulations of the quiz
game. It is called within the `start()` function of the `QuizGame` class. */
void GameRulesAndRegulation()
{
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "                       Welcome to Mindbender Challenge Quiz - Rules and Regulations\n";
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "1. There will be multiple-choice questions in the quiz.\n";
    std::cout << "2. Each question will have four options, and you need to select the correct answer by entering the corresponding option number.\n";
    std::cout << "3. You will earn points for each correct answer, and the points will increase with each question.\n";
    std::cout << "4. You will have a limited amount of time to answer each question. If you fail to answer within the time limit, the game will end.\n";
    std::cout << "5. If you give an incorrect answer, you will lose the game and your accumulated points.\n";
    std::cout << "6. You will have three lifelines: 50-50, Replace the question, and Ask the Expert. You can use each lifeline only once.\n";
    std::cout << "7. The 50-50 lifeline will eliminate two incorrect options, leaving you with the correct answer and one incorrect option.\n";
    std::cout << "8. The Replace the question lifeline will allow you to skip the current question and get a new one.\n";
    std::cout << "9. The Ask the Expert lifeline will provide you with an expert's opinion on the current question.\n";
    std::cout << "10. The quiz will continue until you answer all the questions or choose to quit.\n";
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "Now, here are the prize amounts for each question:\n";

    /* `void DisplayPrizeAmounts();` is a function declaration that specifies the return type `void` and
    the function name `DisplayPrizeAmounts`, along with any parameters it may take (in this case, none).
    This function is later defined in the code with its implementation. The purpose of this function is
    to display the prize amounts for each question in the quiz game. */
    void DisplayPrizeAmounts();
}

/* `void DisplayPrizeAmounts()` is a function that displays the prize amounts for each question in the
quiz game. It is called within the `GameRulesAndRegulation()` function of the `QuizGame` class. The
function uses `std::cout` to print out the prize amounts for each question in a formatted manner. */
void DisplayPrizeAmounts()
{
    /* The above code is printing out the prize amounts for each question in a game show format. The
    prize amounts increase as the questions get harder, with the final question having the highest
    prize amount. */
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "                        Prize Amounts\n";
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "Question 1: $100\n";
    std::cout << "Question 2: $200\n";
    std::cout << "Question 3: $300\n";
    std::cout << "Question 4: $400\n";
    std::cout << "Question 5: $500\n";
    std::cout << "Question 6: $600\n";
    std::cout << "Question 7: $700\n";
    std::cout << "Question 8: $800\n";
    std::cout << "Question 9: $900\n";
    std::cout << "Question 10: $1,000\n";
    std::cout << "Question 11: $2,000\n";
    std::cout << "Question 12: $4,000\n";
    std::cout << "Question 13: $8,000\n";
    std::cout << "Question 14: $16,000\n";
    std::cout << "Question 15: $32,000\n";
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
}

/* The code snippet defines a class named "Question" in C++. */
class Question
{
    /* `private` is a keyword in C++ that is used to specify the access level of class members. When a
    member variable or function is declared as `private`, it can only be accessed within the class
    itself and not from outside the class. This means that other classes or functions cannot directly
    access or modify the private members of a class. In the code snippet provided, the `Question` class
    has private member variables `question`, `options`, and `correctAnswer`, which can only be accessed
    and modified by member functions of the `Question` class. Similarly, the `QuizGame` class has
    private member variables `MAX_QUESTIONS`, `MAX_TIME_SECONDS`, `INITIAL_PRIZE`, `score`,
    `questionCounter`, `currentPrize`, `fiftyFiftyUsed`, `askExpertUsed`, `quiz`, and
    `askedQuestionIndices`, which can only be accessed and modified by member functions of the
    `QuizGame` class. */
private:
    std::string question;
    std::vector<std::string> options;
    int correctAnswer;

    /**
     * This is a C++ class that represents a multiple choice question with options and a correct
     * answer.
     *
     * @return The code defines a class called "Question" with a constructor and three member
     * functions. The constructor takes a string representing a question, a vector of strings
     * representing the answer options, and an integer representing the index of the correct answer.
     * The member functions return the question, answer options, and index of the correct answer,
     * respectively. Nothing is being returned in the code itself, as it is just defining the
     */

public:
    Question(const std::string &question, const std::vector<std::string> &options, int correctAnswer)
        : question(question), options(options), correctAnswer(correctAnswer)
    {
    }

    std::string getQuestion() const
    {
        return question;
    }

    const std::vector<std::string> &getOptions() const
    {
        return options;
    }

    int getCorrectAnswer() const
    {
        return correctAnswer;
    }
};

/* The above code is defining a function named "getRandomNumber" that takes two integer parameters
"min" and "max". The function is expected to return a random integer value between "min" and "max"
(inclusive). */
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

/* The class QuizGame is not defined and therefore cannot be summarized. */
class QuizGame
{
private:
    const int MAX_QUESTIONS;
    const int MAX_TIME_SECONDS;
    const int INITIAL_PRIZE;
    int score;
    int questionCounter;
    int currentPrize;
    bool fiftyFiftyUsed;
    bool askExpertUsed;

    std::vector<Question> quiz;
    std::vector<int> askedQuestionIndices;

public:
    /* The above code is not complete and does not provide enough information to determine what it is
    doing. It appears to be the beginning of a function called "QuizGame()" in the C++ programming
    language, but without the rest of the code it is impossible to know what the function does or what
    its purpose is. */
    QuizGame()
        : MAX_QUESTIONS(15), MAX_TIME_SECONDS(30), INITIAL_PRIZE(1000), score(0), questionCounter(0), currentPrize(INITIAL_PRIZE),
          fiftyFiftyUsed(false), askExpertUsed(false)
    {
        /* The above code is not doing anything as it is incomplete. It seems to be the beginning of a C++
        program, but there is no actual code written yet. */
        quiz = {
            /* The above code is defining an array of 15 Question objects, each with a question, a list
            of answer options, and the index of the correct answer option. This code is likely part
            of a larger program or quiz game that uses these questions to test the user's knowledge. */
            Question("What is the capital of France?", {"Paris", "London", "Berlin", "Rome"}, 1),
            Question("What is the largest planet in our solar system?", {"Jupiter", "Saturn", "Mars", "Earth"}, 0),
            Question("Who painted the Mona Lisa?", {"Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Michelangelo"}, 0),
            Question("Which country won the FIFA World Cup 2018?", {"France", "Brazil", "Germany", "Spain"}, 0),
            Question("What is the chemical symbol for gold?", {"Ag", "Au", "Cu", "Fe"}, 1),
            Question("Which animal is known as the 'King of the Jungle'?", {"Lion", "Tiger", "Elephant", "Giraffe"}, 0),
            Question("Who is the author of the Harry Potter book series?", {"J.K. Rowling", "Stephen King", "George R.R. Martin", "Dan Brown"}, 0),
            Question("Which planet is known as the Red Planet?", {"Venus", "Mars", "Jupiter", "Saturn"}, 1),
            Question("Who was the first Indian woman to win an Olympic medal in badminton?", {"Saina Nehwal", "P. V. Sindhu", "Sania Mirza", "Mary Kom"}, 1),
            Question("In which year did India gain independence?", {"1947", "1950", "1945", "1930"}, 0),
            Question("Which country is known as the 'Land of the Rising Sun'?", {"China", "India", "Japan", "Australia"}, 2),
            Question("What is the largest organ in the human body?", {"Liver", "Heart", "Brain", "Skin"}, 3),
            Question("Who discovered the theory of relativity?", {"Albert Einstein", "Isaac Newton", "Galileo Galilei", "Nikola Tesla"}, 0),
            Question("Which country is famous for its tulip fields?", {"Netherlands", "Italy", "France", "Spain"}, 0),
            Question("What is the national animal of Canada?", {"Lion", "Bald Eagle", "Beaver", "Polar Bear"}, 2)};

        /* The above code is seeding the random number generator with the current time. This is done using the
        `srand()` function from the C++ standard library. The `time(nullptr)` function returns the current
        time as the number of seconds since January 1, 1970, and the `static_cast<unsigned int>` is used to
        convert this value to an unsigned integer. This value is then passed as the seed to the `srand()`
        function, which initializes the random number generator with this seed value. This ensures that each
        time the program is run, the random numbers generated will be different. */
        srand(static_cast<unsigned int>(time(nullptr)));
    }

    /* The above code is defining a function named "start" in C++. However, the function body is not
    provided in the code snippet. */
    void start()
    {
        /* The above code is calling a function named `DisplayDetails()`. */
        DisplayDetails();

        /* The above code is calling a function named "GameRulesAndRegulation". The implementation of this
        function is not shown in the code snippet. */
        GameRulesAndRegulation();

        /* The above code is calling a function named "DisplayPrizeAmounts()" in the C++ programming language.
        The function is expected to display the prize amounts, but the implementation of the function is not
        shown in the code snippet. */
        DisplayPrizeAmounts();

        /* The above code is a while loop that will continue to execute as long as the value of the variable
        "questionCounter" is less than the value of the constant "MAX_QUESTIONS". */
        while (questionCounter < MAX_QUESTIONS)
        {
            std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
            std::cout << "Question " << questionCounter + 1 << ": ";
            /* The above code is calling a function named "displayQuestion()" in C++. */
            displayQuestion();

            if (!answerQuestion())
                break;

            ++questionCounter;
            /* The above code is calling a function named "incrementPrize()" in C++. The purpose and implementation
            of the function is not provided in the given code snippet. */
            incrementPrize();
        }

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
        std::cout << "Game Over!\n";
        std::cout << "You answered " << questionCounter << " questions correctly.\n";
        std::cout << "Your final score is $" << score << ".\n";
    }

private:
    /* The above code is defining a function called `displayQuestion()` in C++. This function does not have
    any parameters and does not return any value. It is expected to display a question, but the actual
    implementation of the function is not provided in the code snippet. */
    void displayQuestion()
    {
        /* The above code is selecting a random question from a quiz and displaying it along with its
        options. It ensures that the same question is not asked again by keeping track of the indices
        of previously asked questions. */
        int questionIndex = getRandomNumber(0, quiz.size() - 1);
        while (isQuestionAsked(questionIndex))
            questionIndex = getRandomNumber(0, quiz.size() - 1);
        askedQuestionIndices.push_back(questionIndex);

        const Question &currentQuestion = quiz[questionIndex];
        std::cout << currentQuestion.getQuestion() << std::endl;

        const std::vector<std::string> &options = currentQuestion.getOptions();
        for (int i = 0; i < options.size(); ++i)
        {
            std::cout << "Option " << i + 1 << ": " << options[i] << std::endl;
        }
    }

    /* The above code is defining a function named `answerQuestion` that returns a boolean value. However,
    the function body is not provided, so it is unclear what the function is intended to do. */
    bool answerQuestion()
    {
        /* The above code is prompting the user to enter an answer option (1-4) for a quiz question. It
        then checks if the chosen option is valid and retrieves the current question from a quiz
        array. If the chosen option is correct, it adds the current prize to the score and returns
        true. If the chosen option is incorrect, it displays a game over message with the number of
        questions answered correctly and the final score, and returns false. */
        int chosenOption;
        std::cout << "Enter your answer option (1-4): ";
        std::cin >> chosenOption;

        if (chosenOption < 1 || chosenOption > 4)
        {
            std::cout << "Invalid option. Please choose a valid option.\n";
            return answerQuestion();
        }

        const Question &currentQuestion = quiz[askedQuestionIndices.back()];
        if (chosenOption - 1 == currentQuestion.getCorrectAnswer())
        {
            std::cout << "Correct answer!\n";
            score += currentPrize;
            return true;
        }
        else
        {
            std::cout << "Incorrect answer!\n";
            std::cout << "Game Over!\n";
            std::cout << "You answered " << questionCounter + 1 << " questions correctly.\n";
            std::cout << "Your final score is $" << score << ".\n";
            return false;
        }
    }

    /* The above code is declaring a function named "isQuestionAsked" that takes an integer parameter
    "questionIndex" and returns a boolean value. The purpose of the function is to check whether a
    specific question has been asked or not, based on the index provided as the parameter. */
    bool isQuestionAsked(int questionIndex)
    {
        /* The above code is a C++ loop that iterates through an array of integers called
        "askedQuestionIndices". It checks if the current integer in the loop is equal to a variable
        called "questionIndex". If it is, the function returns true. If the loop completes without
        finding a match, the function returns false. */
        for (int index : askedQuestionIndices)
        {
            if (index == questionIndex)
                return true;
        }
        return false;
    }

    /* The above code is defining a function named "incrementPrize" in C++. However, the function body is
    not provided in the code snippet, so it is unclear what the function is intended to do. */
    void incrementPrize()
    {
        /* The code is implementing a switch statement that checks the value of the variable
        "questionCounter". If the value of "questionCounter" is 2, 5, or 8, then the value of the
        variable "currentPrize" is multiplied by 2. */
        switch (questionCounter)
        {
        case 2:
        case 5:
        case 8:
            currentPrize *= 2;
            break;
        }
    }
};

/* The above code is a basic C++ program that defines the main function, which is the entry point of
the program. However, the code is incomplete as it does not contain any statements or instructions
to be executed. */
int main()
{
    /* The above code is calling a function named `GetDetail()`. However, without the context of the code,
    it is difficult to determine what the function does or what its purpose is. */
    GetDetail();

    /* The above code is creating an instance of the QuizGame class. */
    QuizGame game;

    /* The above code is calling the `start()` function of an object named `game`. The purpose and
    implementation of the `start()` function is not provided in the given code snippet. */
    game.start();

    return 0;
}
