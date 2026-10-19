#include <Arduino.h>

String getGameMode();
int getNumberOfPlayers();
void startGame(int, String);
void finishGame();
int normalGame();
int marathonGame();
int checkBonus();

void setup()
{
  /*
  setup pins and variables
  */
}

void loop()
{
  /*
  1. get gamemode from the user: getGameMode()
  2. get the number of players from the user: getNumberOfPlayers()
  3. start the game: startGame(numberOfPlayers, gamemode)
  4. finish the game and display the winner and scores: finishGame()
  */
}

int getNumberOfPlayers()
{
  /*
  get the number of players from the user
  switch between 1 and 2 using flipper buttons
  select using start button
  */
  return 0;
}

String getGameMode()
{
  /*
  get the gamemode from the user
  switch between gamemodes using flipper buttons
  select using start button
  */
  return "";
}

void startGame(int numberOfPlayers, String gamemode)
{
  /*
  reset scores and start the correct gamemode
  */
}

void NormalGame()
{
  /*
  start the normal game
  */
}

void MarathonGame()
{
  /*
  start the marathon game
  */
}

int checkBonus()
{
  /*
  check if the player has earned a bonus
  bonus can be earned by hitting all 4 targets,
  when hit in order bonus doubles
  */
  return 0;
}

void finishGame()
{
  /*
  display the winner and scores
  */
}