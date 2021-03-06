﻿using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace principia {
namespace ksp_plugin_adapter {

internal static class Log {
  internal static String[] severity_names = {"INFO", "WARNING", "ERROR",
                                             "FATAL"};

  internal static void InitGoogleLogging() {
    Interface.InitGoogleLogging();
  }

  internal static void ActivateRecorder(bool activate) {
    Interface.ActivateRecorder(activate);
  }

  internal static void SetBufferedLogging(int max_severity) {
    Interface.SetBufferedLogging(max_severity);
  }

  internal static int GetBufferedLogging() {
    return Interface.GetBufferedLogging();
  }

  internal static void SetBufferDuration(int seconds) {
    Interface.SetBufferDuration(seconds);
  }

  internal static int GetBufferDuration() {
    return Interface.GetBufferDuration();
  }

  internal static void SetSuppressedLogging(int min_severity) {
    Interface.SetSuppressedLogging(min_severity);
  }

  internal static int GetSuppressedLogging() {
    return Interface.GetSuppressedLogging();
  }

  internal static void SetVerboseLogging(int level) {
    Interface.SetVerboseLogging(level);
  }

  internal static int GetVerboseLogging() {
    return Interface.GetVerboseLogging();
  }

  internal static void SetStderrLogging(int min_severity) {
    Interface.SetStderrLogging(min_severity);
  }

  internal static int GetStderrLogging() {
    return Interface.GetStderrLogging();
  }

  internal static void Info(String message) {
    Interface.LogInfo(message);
  }

  internal static void Warning(String message) {
    Interface.LogWarning(message);
  }

  internal static void Error(String message) {
    Interface.LogError(message);
  }

  // Returns an exception so it can be thrown so that the compiler doesn't
  // complain about non-returning code.
  internal static Exception Fatal(String message) {
    Interface.LogFatal(message);
    return new Exception();
  }
}

}  // namespace ksp_plugin_adapter
}  // namespace principia
