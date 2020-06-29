// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay()
{
    Super::BeginPlay();
    SetupGame();

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug line

    // Welcoming The Player
    PrintLine(TEXT("Welcome to the Bull Cows Game!"));
    PrintLine(TEXT("Please guess the %i letter word."), HiddenWord.Len());
    PrintLine(TEXT("Type in your guess and press enter to continue..."));
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
        if (HiddenWord.Len() != Input.Len())
        {
            PrintLine(TEXT("The hidden word is %i characters long, try again!."), HiddenWord.Len());
        }
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