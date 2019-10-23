#include "gmock/gmock.h"
#include <string>

class MockThruster : public IThruster 
{
  public:
    explicit MockThruster();
    virtual ~MockThruster();

 public:
  MOCK_METHOD1(activate, std::string(int level));
};
