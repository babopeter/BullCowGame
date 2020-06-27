// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcoming The Player
    PrintLine(TEXT("Welcome to the Bull Cows Game!"));
    PrintLine(TEXT("Please guess the four letter word.")); // 4 letter word hardcoded
    PrintLine(TEXT("Input something and press Enter..."));
    
    SetupGame();// Setting Up Game
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    // Checking PlayerGuess
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You have won!"));
    }
    else
    {
        PrintLine(TEXT("You have lost!"));
    }

    // Check if Isogram
    // Check if right number of characters
    // Remove life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No Show GameOver and show HiddenWord
    // Prompt to PlayAgain
    // Check User Input
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4;
}