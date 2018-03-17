﻿using LogLib;
using ServerFrameWork;
using System;
using System.Threading;
using WorldManagerServerLib;

namespace WorldManagerServer
{
    class Program
    {
        static void Main(string[] args)
        {
            AbstractServer api = new Api();
            try
            {
                api.Init(args);
            }
            catch (Exception e)
            {
                Log.Error("{0} init failed:{1}", api.ApiTag.Type, e.ToString());
                api.Exit();
                return;
            }

            Thread thread = new Thread(api.MainLoop);
            thread.Start();

            Log.Info("{0} is ready...", api.ApiTag.GetServerTagString());

            while (thread.IsAlive)
            {
                api.ProcessInput();
                Thread.Sleep(1000);
            }

            api.Exit();
            Log.Info("{0} is exit...", api.ApiTag.GetServerTagString());
        }
    }
}
