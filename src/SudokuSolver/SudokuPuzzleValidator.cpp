#include "SudokuPuzzleValidator.h"
#include "SudokuPuzzle.h"

#include<QDebug>

SudokuPuzzleValidator::SudokuPuzzleValidator()
{
}

SudokuPuzzleValidator::~SudokuPuzzleValidator()
{
}

bool SudokuPuzzleValidator::isValid(SudokuPuzzle& puzzle) const
{
    for (int i = 0; i < 9; i++)
    {
        auto row = std::vector<SudokuCell>(puzzle.rowAt(i).begin(), puzzle.rowAt(i).end());
        if (containsDuplicate(row))
            return false;
        auto column = std::vector<SudokuCell>(puzzle.columnAt(i).begin(), puzzle.columnAt(i).end());
        if (containsDuplicate(column))
            return false;
        auto quadrant = std::vector<SudokuCell>(puzzle.quadrantAt(i).begin(), puzzle.quadrantAt(i).end());
        if (containsDuplicate(quadrant))
            return false;
    }
    return true;
}

bool SudokuPuzzleValidator::containsDuplicate(std::vector<SudokuCell>& nums) const
{
    if (nums.size() == 0 || nums.size() == 1) {
        return false;
    }
    qWarning() << nums.size();

    std::sort(nums.begin(), nums.end());
    SudokuCell check = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        qWarning() << check;
        qWarning() << nums[i];
        qWarning() << "";

        if (nums[i] == check && nums[i] != 0) {
            return true;
        } else {
            check = nums[i];
        }
    }
    
    return false;
}