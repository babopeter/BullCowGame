// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    // START GAME
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cows Game!"));
    PrintLine(TEXT("Please guess the four letter word.")); // 4 letter word hardcoded
    PrintLine(TEXT("Input something and press Enter..."));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    // SET HIDDEN WORD
    FString HiddenWord = TEXT("cake"); // Move outside this function
    
    //PROMPT FOR GUESS
    PrintLine(Input);
    
    //IS GUESS CORRECT
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You have won!"));
    }
    else
    {
        PrintLine(TEXT("You have lost!"));
    }
    //WIN/LOSE
}
