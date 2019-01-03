#pragma once
#include <string>

namespace dxup {

  namespace config {

    enum var {
      EmitNop,
      Log,
      ShaderModel,
      Debug,
      ShaderSpew,
      ShaderDump,
      RandomClearColour,
      UnimplementedFatal,
      InitialHideCursor,
      RefactoringAllowed,
      GDICompatible,

      UseFakes,
      FakeDriver,
      FakeDescription,
      FakeDeviceName,
      FakeDriverVersion,
      FakeVendorId,
      FakeDeviceId,
      FakeSubSysId,
      FakeRevision,
      FakeDeviceIdentifier,

      Count,
    };

    float getFloat(var variable);
    int64_t getInt(var variable);
    const std::string& getString(var variable);
    bool getBool(var variable);

  }

}