# GameBox.Framework Namespace
 

\[Missing <summary> documentation for "N:GameBox.Framework"\]


## Classes
&nbsp;<table><tr><th></th><th>Class</th><th>Description</th></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="7b9e79b1-c4da-29bd-f2d7-0148df5230c7">AsyncCallTask</a></td><td>
异步调用任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="6f6ac9d7-b696-02c1-1b47-78b7e412d3ab">AsyncCallWithResultTask(TResult)</a></td><td>
带有返回值的异步调用任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="427a98f7-55a9-8e74-2d47-813993cbe0a9">AsyncOperationTask(T)</a></td><td>
基于AsyncOperation的异步调用任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="6b13ee22-910d-81b0-00d6-f25003f7b115">AsyncTask</a></td><td>
异步任务基类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="d1f15ea6-3d2f-e653-09c2-6238518de917">AudioCrossFadeTask</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="2f732106-c1d3-cfc7-e9bd-96254f667f0a">C0</a></td><td>
基础类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="726c0660-8073-baf0-60bd-4c73a5764d49">CompletedTask</a></td><td>
异步完成任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="94a5b0c3-a9b8-0c92-62db-874ecf42764c">CRef(T)</a></td><td>
基础引用计数类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="60424de5-aa4b-317b-d855-e36fe534b2eb">CryptoUtility</a></td><td>
密码相关工具</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="1164a622-f7ed-728c-d0e2-c3947edb1cfa">Dispatcher</a></td><td>
消息分发器。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="9a3d38ce-6d92-e5ee-78c6-a02b7213cddf">EventTriggerUtility</a></td><td>
EventTrigger工具，提供一种通用的鼠标/手指触发UI响应的流程。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="be27f71e-7213-6e5c-62d3-ba5a5acb966b">FileReadTask</a></td><td>
文件读取异步任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="a53f661a-3899-4cd5-ea3b-0e849d25039b">FileWriteTask</a></td><td>
文件写入异步任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="9c7604a9-01e1-6483-157e-769e11fdec74">GlobalLogger</a></td><td>
全局Logger，所有Service外部的Log都可以使用该全局Logger来记录。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="1aea1b1f-1904-f47c-5039-8e013d0e7ed2">GraphStyle</a></td><td>
Graph样式表。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="632ac26d-52b7-4990-49ee-77d0dd452d86">HttpDownloadTask</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="547b0213-be9a-925d-2a57-f4e4c6dc6300">Logger</a></td><td>
日志基础抽象类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="0f5403fb-22a6-7355-7545-e33d7ed43686">Logger(T)</a></td><td>
根据Service类型创建的Logger对象。每一个Service的Logger在文件输出的情况下会 生成一个以Service的Namespace为文件名的日志文件。在Service的模块中无须自行 创建，Service在运行后已经有一个Logger全局单例对象被创建，可以直接使用。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="fbb77cf2-ca1a-d796-6639-bec63b9ccf94">Message</a></td><td>
消息。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="d1a02e79-c7ae-e904-a738-c61a4f520689">PathUtility</a></td><td>
路径工具，根据平台来获取相应的路径格式。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")![Code example](media/CodeExample.png "Code example")</td><td><a href="3438f603-511f-d3df-ce62-8ab76eee029b">ServiceCenter</a></td><td>
ServiceCenter是所有服务的运行载体。它承载所有Service的初始化，运行和终止。<br /> 使用GameBox的服务有两种主要方式：<br /> 1. 在游戏运行前确保所有依赖的服务都已经装载，然后在之后通过ServiceCenter直接同步获取需要的服务接口。<br /> 2. 每次使用一个服务时，都通过异步的方式先确保服务已经运行，然后再使用。<br /></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="dd4090ce-3e11-b97d-dd36-83ac66bdd027">ServiceEditor</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="cb217c8b-e652-6326-5196-2e4d7e6a23f6">ServiceInstaller</a></td><td>
Service安装器基础抽象类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="94bba800-fb2b-c640-1eb8-331777976773">ServiceInstaller(Service)</a></td><td>
Service安装器抽象类，通过Unity编辑器进行初始化Service。每一个Service都需要实现一个对应的安装器。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="ffdb0cb1-5fec-451a-ebd5-b8bfe78f90da">ServicePlayer</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="adb79d33-528c-26f3-e866-ecb89a436d52">ServicesTask</a></td><td>
获取多个Service的异步任务。返回的Result是一个IService[]，其中的Service 顺序和传入的Service的Id在string[]中的顺序一致。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="56412eae-045a-ed77-c329-255240a93e1d">ServiceTask</a></td><td>
根据Service Id获取单个Service。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="8c5a816a-0d43-cd8e-02a4-050005bec3c0">ServiceTask(T)</a></td><td>
根据Service类型获取单个Service</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="bbd1149b-7e22-3ee9-1a83-d284ea01ec5f">SingletonState(T)</a></td><td>
单例状态类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="31369234-3a70-f25d-7462-96ffa4d1fb93">State</a></td><td>
状态类。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="ebb2f21a-3a91-8c84-5f4e-c58028df299f">StateMachine</a></td><td>
状态机。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="5ca3a2d0-cfdd-da7c-65e7-1a3a5ba59b01">StateSet(T)</a></td><td>
状态集合。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="6223fa99-de6c-f108-8b84-1c8aa9d7df6b">StreamExtension</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="7803a1af-8017-06c3-8130-b3fd352be039">StringStream</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="12ef0a15-b540-3e97-79d6-5b9155505784">StringStreamAsyncReader</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="9aeec54e-a056-42b3-343f-58f7e202a855">StringStreamReader</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="2974c04b-8103-2057-280d-ce3353eba6f3">StringStreamWriter</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="5ec50ed6-73fc-bb4a-e4a9-86bdd81ee9e9">TableStream</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="e038a4d3-fe60-7cd5-3c50-31190a3dbc88">TableStreamAsyncReader</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="10d344c4-9264-e9ac-416b-eba0fb18151a">TableStreamReader</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="44e22804-9fc2-a91c-fe5b-5cd24a589d73">TableStreamWriter</a></td><td></td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="cb16921a-748b-d23c-560f-f7936e8b5bb1">Version</a></td><td>
游戏版本对象。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="4547df16-b29d-f285-9433-0331977adb2a">WaitAllTask</a></td><td>
同时开始一系列任务，并等待所有任务完成的异步任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="a904eb47-902b-2529-5dab-7cd8622ea115">WWWLoadFromCacheTask</a></td><td>
通过WWW.LoadFromCacheOrDownload函数获取的异步任务。</td></tr><tr><td>![Public class](media/pubclass.gif "Public class")</td><td><a href="799299d4-2a80-d744-ed27-1e8d57285d01">WWWLoadTask</a></td><td>
通过WWW加载的异步任务。</td></tr></table>

## Interfaces
&nbsp;<table><tr><th></th><th>Interface</th><th>Description</th></tr><tr><td>![Public interface](media/pubinterface.gif "Public interface")</td><td><a href="741e402f-9585-4b18-9dbb-3b6ef80bacae">IService</a></td><td>
IService是每一个子Service需要实现的接口。</td></tr><tr><td>![Public interface](media/pubinterface.gif "Public interface")</td><td><a href="691cff4c-ca92-a568-5af1-ef87a159a8a5">IServiceArgs</a></td><td>
服务初始化参数输入接口。</td></tr><tr><td>![Public interface](media/pubinterface.gif "Public interface")</td><td><a href="fea729f5-b32b-fc52-6303-b8840dbc73a6">IServiceGraph</a></td><td>
Service图表接口。用来在运行时展现当前服务的各种调试或状态数据，用来为开发 提供直接的信息帮助。IServiceGraph是在OnGUI中执行，支持所有的IMGUI操作。</td></tr><tr><td>![Public interface](media/pubinterface.gif "Public interface")</td><td><a href="7bcb3760-e4ae-9281-dc87-cea5ee2518d6">IServiceHost</a></td><td></td></tr><tr><td>![Public interface](media/pubinterface.gif "Public interface")</td><td><a href="b4ea1b3a-c57d-bdbe-6bb2-31b5ecd4a8ec">IServiceRunner</a></td><td>
IServiceRunner是Service的运行沙盒，用来隔离每一个Service，并控制Service的生命周期</td></tr></table>

## Delegates
&nbsp;<table><tr><th></th><th>Delegate</th><th>Description</th></tr><tr><td>![Public delegate](media/pubdelegate.gif "Public delegate")</td><td><a href="9bc40215-f1aa-6e1d-d088-b6330fd0812f">ServiceShutdown</a></td><td>
Service终止的代理。</td></tr></table>

## Enumerations
&nbsp;<table><tr><th></th><th>Enumeration</th><th>Description</th></tr><tr><td>![Public enumeration](media/pubenumeration.gif "Public enumeration")</td><td><a href="755cb1fe-201a-104f-653e-2a293dd31eb6">FileWriteMode</a></td><td>
文件写入模式。</td></tr><tr><td>![Public enumeration](media/pubenumeration.gif "Public enumeration")</td><td><a href="f3c43d40-8b91-806e-30c8-aa2301686dbf">LogLevel</a></td><td>
Log等级。</td></tr><tr><td>![Public enumeration](media/pubenumeration.gif "Public enumeration")</td><td><a href="be1ddbcb-39f6-0608-d71b-3d16b178c6f5">LogType</a></td><td>
Log的类型。</td></tr></table>&nbsp;
