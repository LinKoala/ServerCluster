﻿using StackExchange.Redis;
using System;
using System.Reflection;
using System.Text.RegularExpressions;

namespace ServersCluster
{
    class Program
    {
        enum type
        {
            aaa = 0,
            bbb=2
        }
        static void Main(string[] args)
        {
            // 
            //ConfigurationOptions config = new ConfigurationOptions();
            //config.ReconnectRetryPolicy = new ExponentialRetry(1000);


            //Regex regChina = new Regex("^[^\x00-\xFF]");
            //Regex regEnglish = new Regex("^[a-zA-Z]");
            //Regex reg = new Regex("^[a-zA-Z0-9\u4e00-\u9fa5]");
            Regex reg = new Regex("^[a-zA-Z0-9_\u4e00-\u9fa5]+$");  //只包含字母数字汉字下划线……【98

            //int a = 2 ^ 4;

            string strNow = DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff");

            Console.WriteLine("-------111{0}111------",type.aaa);
            Console.ForegroundColor = ConsoleColor.Magenta;
            Console.WriteLine("-------222222------");
            Console.ForegroundColor = ConsoleColor.Gray;
            Console.WriteLine("-------333333------");

            Console.WriteLine("-------------");
        }
    }
}
