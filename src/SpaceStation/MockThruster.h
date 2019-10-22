#include "gmock/gmock.h"
#include <QString>

class MockThruster : public IThruster 
{
  public:
    explicit MockThruster();
    virtual ~MockThruster();

 public:
  MOCK_METHOD1(activate, QString(int level));
};
