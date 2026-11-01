using System;

public static class RageEvent
{
    public static event Action<RageEventArgs> OnRageChanged;

    public static void RaiseRageChanged(RageEventArgs args)
    {
        OnRageChanged?.Invoke(args);
    }
}
