#include <iostream>
#include <conio.h>
#include <time.h>
#include <Windows.h>
using namespace std;

// Enum for ball direction
enum eDirection
{
    STOP,
    RIGHT,
    UPRIGHT,
    DOWNRIGHT,
    LEFT,
    UPLEFT,
    DOWNLEFT
};

// Enum for paddle control
enum eControler
{
    PAUSE,
    UP,
    DOWN
};

// Abstract base class for game objects (ball and paddles)
class cGameObject
{
protected:
    int x, y;                 // Current position
    int originalX, originalY; // Starting position

public:
    // Constructor to initialize positions
    cGameObject(int posX, int posY)
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }

    // Virtual destructor
    virtual ~cGameObject() {}

    // Pure virtual function to reset position
    virtual void reset() = 0;

    // Inline functions to get current positions
    inline int getX() const
    {
        return x;
    }
    inline int getY() const
    {
        return y;
    }

    // Function to reset position to the original position
    void resetPosition()
    {
        x = originalX;
        y = originalY;
    }
};

// Class for pong ball inheriting from cGameObject
class cBall : public cGameObject
{
private:
    eDirection dir; // Current direction of the ball
    /*eDirection dir: Declares a private member variable dir of type eDirection, 
    which will store the current direction of the ball */

public:
    // Constructor to initialize ball position and direction
    cBall(int posX, int posY) : cGameObject(posX, posY)
    {
        dir = STOP;
    }

    // Function to reset ball position and direction
    void reset() override
    {
        resetPosition();
        dir = STOP;
    }
    /*void reset() override: Declares a public member function named reset that overrides a virtual function from the base class.
resetPosition(): Calls a function (presumably from the base class) to reset the position of the ball.
dir = STOP: Resets the direction of the ball to STOP*/

    // Function to change ball direction
    void changeDirection(eDirection direction)
    {
        dir = direction;
    }
/*void changeDirection(eDirection direction): Declares a public member function that takes an eDirection 
parameter and sets the ball's direction to this value.*/
    // Function to set a random direction for the ball
    void randomDirection()
    {
        srand(time(0));
        dir = static_cast<eDirection>((rand() % 6) + 1);
    }
    /*void randomDirection(): Declares a public member function that sets a random direction for the ball.
srand(time(0)): Seeds the random number generator with the current time.
dir = static_cast<eDirection>((rand() % 6) + 1): Sets dir to a random value of eDirection. (rand() % 6) + 1 generates a random number between 1 and 6,
 and static_cast<eDirection> converts this number to an eDirection value.*/

    // Inline function to get current direction
    inline eDirection getDir() const
    {
        return dir;
    }
/*inline eDirection getDir() const: Declares an inline member function that returns the current direction of the ball.
 const indicates that this function does not modify any member variables.*/
    // Function to move the ball based on its direction
    void move()
    {
        switch (dir)
        {
        case STOP:
            break;
        case RIGHT:
            x++;
            break;
        case UPRIGHT:
            x++;
            y--;
            break;
        case DOWNRIGHT:
            x++;
            y++;
            break;
        case LEFT:
            x--;
            break;
        case UPLEFT:
            x--;
            y--;
            break;
        case DOWNLEFT:
            x--;
            y++;
            break;
        default:
            break;
        }
    }
};
/*void move(): Declares a public member function that moves the ball based on its current direction.
switch (dir): A switch statement that executes different code based on the value of dir.
case STOP: break;: If dir is STOP, do nothing.
case RIGHT: x++; break;: If dir is RIGHT, increment the x-coordinate.
case UPRIGHT: x++; y--; break;: If dir is UPRIGHT, increment the x-coordinate and decrement the y-coordinate.
case DOWNRIGHT: x++; y++; break;: If dir is DOWNRIGHT, increment both the x and y coordinates.
case LEFT: x--; break;: If dir is LEFT, decrement the x-coordinate.
case UPLEFT: x--; y--; break;: If dir is UPLEFT, decrement both the x and y coordinates.
case DOWNLEFT: x--; y++; break;: If dir is DOWNLEFT, decrement the x-coordinate and increment the y-coordinate.
default: break;: If dir does not match any case, do nothing*/
// Class for paddles inheriting from cGameObject
class cPaddle : public cGameObject
{
private:
    eControler joyStick; // Current direction of the paddle

public:
    // Constructor to initialize paddle position and direction
    cPaddle(int posX, int posY) : cGameObject(posX, posY)
    {
        joyStick = PAUSE;
    }
    /*cPaddle(int posX, int posY): Constructor for the cPaddle class that takes two integer arguments posX and posY.
: cGameObject(posX, posY): Initializes the base class cGameObject with posX and posY.
joyStick = PAUSE: Sets the initial direction of the paddle to PAUSE*/

    // Function to reset paddle position and direction
    void reset() override
    {
        resetPosition();
        joyStick = PAUSE;
    }
    /*void reset() override: Declares a public member function named reset that overrides a virtual function from the base class.
resetPosition(): Calls a function (presumably from the base class) to reset the position of the paddle.
joyStick = PAUSE: Resets the direction of the paddle to PAUSE*/

    // Function to change paddle direction
    void changeDirection(eControler dir)
    {
        joyStick = dir;
    }
    /*void changeDirection(eControler dir): 
    Declares a public member function that takes an eControler parameter and sets the paddle's direction to this value.*/

    // Function to move the paddle based on its direction
    void move()
    {
        switch (joyStick)
        {
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case PAUSE:
            break;
        default:
            break;
        }
    }
};
/*void move(): Declares a public member function that moves the paddle based on its current direction.
switch (joyStick): A switch statement that executes different code based on the value of joyStick.
case UP: y--; break;: If joyStick is UP, decrement the y-coordinate to move the paddle up.
case DOWN: y++; break;: If joyStick is DOWN, increment the y-coordinate to move the paddle down.
case PAUSE: break;: If joyStick is PAUSE, do nothing (no movement).
default: break;: If joyStick does not match any case, do nothing......*/

// Class to manage the game
class cGameManager
{
private:
    int width, height;  // Dimensions of the game area
    int score1, score2; // Scores of the two players
    bool quit;          // Flag to check if the game is over
    cBall *ball;        // Pointer to ball object
    cPaddle *player1;   // Pointer to player 1 paddle
    cPaddle *player2;   // Pointer to player 2 paddle

public:
    // Constructor to initialize game settings and create objects
    cGameManager()
    {
        quit = false;
        height = 15;
        width = 50;
        score1 = score2 = 0;
        ball = new cBall(width / 2, height / 2);
        player1 = new cPaddle(1, height / 2);
        player2 = new cPaddle(width - 2, height / 2);
    }

    // Destructor to delete dynamically created objects
    ~cGameManager()
    {
        delete ball;
        delete player1;
        delete player2;
    }

    // Function to increase score and reset objects to original positions
    void ScoreUp(cPaddle *player)
    {
        if (player == player1)
        {
            score1++;
        }
        else if (player == player2)
        {
            score2++;
        }
        ball->reset();
        player1->reset();
        player2->reset();
    }

    // Function to draw the game area and objects
    void Draw()
    {
        // Set cursor to (0,0) to refresh the screen without flickering
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0});

        // Draw top wall
        for (int i = 0; i < width + 2; i++)
        {
            cout << "\xB2";
        }
        cout << endl;

        // Draw side walls, ball, and paddles
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                int ballX = ball->getX();
                int ballY = ball->getY();
                int player1x = player1->getX();
                int player1y = player1->getY();
                int player2x = player2->getX();
                int player2y = player2->getY();

                if (j == 0)
                {
                    cout << "\xB1"; // Left wall
                }
                // Draw ball and paddles
                if (ballX == j && ballY == i)
                {
                    cout << "o";
                }
                else if (player1x == j && (player1y >= i && player1y < i + 4))
                {
                    cout << "\xDB";
                }
                else if (player2x == j && (player2y >= i && player2y < i + 4))
                {
                    cout << "\xDB";
                }
                else
                {
                    cout << " ";
                    if (j == width - 1)
                    {
                        cout << "\xB1"; // Right wall
                    }
                }
            }
            cout << endl;
        }

        // Draw bottom wall
        for (int i = 0; i < width + 2; i++)
        {
            cout << "\xB2";
        }
        cout << endl;

        // Draw scores
        for (int i = 0; i < width / 2 - 3; i++)
        {
            cout << " ";
        }
        cout << score1 << " : " << score2 << endl;
    }

    // Function to handle user input for controlling paddles
    void Input()
    {
        int player1y = player1->getY();
        int player2y = player2->getY();

        if (_kbhit())
        {
            // Start the game if any key is pressed
            if (ball->getDir() == STOP)
            {
                ball->randomDirection();
            }
            // Control paddles based on user input
            switch (_getch())
            {
            case 'w':
                if (player1y - 3 > 0)
                {
                    player1->changeDirection(UP);
                }
                break;
            case 's':
                if (player1y + 1 < height)
                {
                    player1->changeDirection(DOWN);
                }
                break;
            case 'i':
                if (player2y - 3 > 0)
                {
                    player2->changeDirection(UP);
                }
                break;
            case 'j':
                if (player2y + 1 < height)
                {
                    player2->changeDirection(DOWN);
                }
                break;
            case 'q':
                quit = true; // Quit the game
                break;
            default:
                break;
            }
        }
    }

    // Function to implement game logic
    void Logic()
    {
        // Move ball and paddles
        ball->move();
        player1->move();
        player2->move();

        // Get positions of ball and paddles
        int ballX = ball->getX();
        int ballY = ball->getY();
        int player1x = player1->getX();
        int player1y = player1->getY();
        int player2x = player2->getX();
        int player2y = player2->getY();

        // Check for ball collisions with paddles
        if (ballX == player1x + 1)
        {
            if (ballY == player1y - 3)
            {
                ball->changeDirection(UPRIGHT);
            }
            else if (ballY == player1y - 2 || ballY == player1y - 1)
            {
                ball->changeDirection((eDirection)(rand() % 3 + 1)); // Random right directions
            }
            else if (ballY == player1y)
            {
                ball->changeDirection(DOWNRIGHT);
            }
        }
        else if (ballX == player2x - 1)
        {
            if (ballY == player2y - 3)
            {
                ball->changeDirection(UPLEFT);
            }
            else if (ballY == player2y - 2 || ballY == player2y - 1)
            {
                ball->changeDirection((eDirection)(rand() % 3 + 4)); // Random left directions
            }
            else if (ballY == player2y)
            {
                ball->changeDirection(DOWNLEFT);
            }
        }

        // Reflect ball direction if it hits top or bottom wall
        if (ballY == height - 1)
        {
            ball->changeDirection(ball->getDir() == DOWNRIGHT ? UPRIGHT : UPLEFT);
        }
        else if (ballY == 0)
        {
            ball->changeDirection(ball->getDir() == UPRIGHT ? DOWNRIGHT : DOWNLEFT);
        }
        else if (ballX == width - 1)
        {
            ScoreUp(player1); // Increase score if ball goes through right wall
        }
        else if (ballX == 0)
        {
            ScoreUp(player2); // Increase score if ball goes through left wall
        }
        // Stop moving paddle if it hits top or bottom wall
        if (player1y - 4 < 0)
        {
            player1->changeDirection(PAUSE);
        }
        else if (player1y + 2 > height)
        {
            player1->changeDirection(PAUSE);
        }
        if (player2y - 4 < 0)
        {
            player2->changeDirection(PAUSE);
        }
        else if (player2y + 2 > height)
        {
            player2->changeDirection(PAUSE);
        }
        // End the game if any player scores 10 points
        if (score1 == 10 || score2 == 10)
        {
            quit = true;
        }
    }

    // Function to set up and run the game
    void Game()
    {
        string p1, p2;
        cout << "Player1: ";
        cin >> p1;
        cout << "Player2: ";
        cin >> p2;

        while (!quit)
        {
            Draw();  // Draw the game area and objects
            Input(); // Handle user input
            Logic(); // Implement game logic
        }

        // Display the winner or if it's a tie
        if (score1 != score2)
        {
            score1 > score2 ? cout << p1 << " Won" : cout << p2 << " Won";
        }
        else
        {
            cout << "Tie";
        }
    }
};

int main()
{
    cGameManager c;
    c.Game();
    return 0;
}