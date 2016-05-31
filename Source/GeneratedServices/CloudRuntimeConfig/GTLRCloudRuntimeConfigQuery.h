// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud RuntimeConfig API (runtimeconfig/v1beta1)
// Description:
//   Provides capabilities for dynamic configuration and coordination for
//   applications running on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/deployment-manager/docs/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudRuntimeConfig_RuntimeConfig;
@class GTLRCloudRuntimeConfig_Variable;
@class GTLRCloudRuntimeConfig_Waiter;
@class GTLRCloudRuntimeConfig_WatchVariableRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud RuntimeConfig query classes.
 */
@interface GTLRCloudRuntimeConfigQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Creates a new RuntimeConfig resource. The configuration name must be
 *  unique within project.
 *
 *  Method: runtimeconfig.projects.configs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsCreate : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsCreateWithObject:parent:]

/**
 *  The [project
 *  ID](https://support.google.com/cloud/answer/6158840?hl=en&ref_topic=6158848)
 *  for this request, in the format `projects/[PROJECT_ID]`.
 */
@property(copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_RuntimeConfig.
 *
 *  Creates a new RuntimeConfig resource. The configuration name must be
 *  unique within project.
 *
 *  @param object The @c GTLRCloudRuntimeConfig_RuntimeConfig to include in the
 *    query.
 *  @param parent The [project
 *    ID](https://support.google.com/cloud/answer/6158840?hl=en&ref_topic=6158848)
 *    for this request, in the format `projects/[PROJECT_ID]`.
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudRuntimeConfig_RuntimeConfig *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a RuntimeConfig resource.
 *
 *  Method: runtimeconfig.projects.configs.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsDelete : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsDeleteWithname:]

/**
 *  The RuntimeConfig resource to delete, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Empty.
 *
 *  Deletes a RuntimeConfig resource.
 *
 *  @param name The RuntimeConfig resource to delete, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a RuntimeConfig resource.
 *
 *  Method: runtimeconfig.projects.configs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsGet : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsGetWithname:]

/**
 *  The name of the RuntimeConfig resource to retrieve, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_RuntimeConfig.
 *
 *  Gets information about a RuntimeConfig resource.
 *
 *  @param name The name of the RuntimeConfig resource to retrieve, in the
 *    format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists all the RuntimeConfig resources within project.
 *
 *  Method: runtimeconfig.projects.configs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsList : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsListWithparent:]

/**
 *  Specifies the number of results to return per page. If there are fewer
 *  elements than the specified number, returns all elements.
 */
@property(assign) NSInteger pageSize;

/**
 *  Specifies a page token to use. Set `pageToken` to a `nextPageToken`
 *  returned by a previous list request to get the next page of results.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  The [project
 *  ID](https://support.google.com/cloud/answer/6158840?hl=en&ref_topic=6158848)
 *  for this request, in the format `projects/[PROJECT_ID]`.
 */
@property(copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_ListConfigsResponse.
 *
 *  Lists all the RuntimeConfig resources within project.
 *
 *  @param parent The [project
 *    ID](https://support.google.com/cloud/answer/6158840?hl=en&ref_topic=6158848)
 *    for this request, in the format `projects/[PROJECT_ID]`.
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: runtimeconfig.projects.configs.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsOperationsGet : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsOperationsGetWithname:]

/** The name of the operation resource. */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates a RuntimeConfig resource. The configuration must exist beforehand.
 *
 *  Method: runtimeconfig.projects.configs.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsUpdate : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsUpdateWithObject:name:]

/**
 *  The name of the RuntimeConfig resource to update, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_RuntimeConfig.
 *
 *  Updates a RuntimeConfig resource. The configuration must exist beforehand.
 *
 *  @param object The @c GTLRCloudRuntimeConfig_RuntimeConfig to include in the
 *    query.
 *  @param name The name of the RuntimeConfig resource to update, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsUpdate
 */
+ (instancetype)queryWithObject:(GTLRCloudRuntimeConfig_RuntimeConfig *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a variable within the given configuration. You cannot create
 *  a variable with a name that is a prefix of an existing variable name, or a
 *  name that has an existing variable name as a prefix.
 *  To learn more about creating a variable, read the
 *  [Setting and Getting
 *  Data](/deployment-manager/runtime-configurator/seta-and-get-variables)
 *  documentation.
 *
 *  Method: runtimeconfig.projects.configs.variables.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesCreate : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsVariablesCreateWithObject:parent:]

/**
 *  The path to the RutimeConfig resource that this variable should belong to.
 *  The configuration must exist beforehand; the path must by in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Variable.
 *
 *  Creates a variable within the given configuration. You cannot create
 *  a variable with a name that is a prefix of an existing variable name, or a
 *  name that has an existing variable name as a prefix.
 *  To learn more about creating a variable, read the
 *  [Setting and Getting
 *  Data](/deployment-manager/runtime-configurator/seta-and-get-variables)
 *  documentation.
 *
 *  @param object The @c GTLRCloudRuntimeConfig_Variable to include in the
 *    query.
 *  @param parent The path to the RutimeConfig resource that this variable
 *    should belong to.
 *    The configuration must exist beforehand; the path must by in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudRuntimeConfig_Variable *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a variable or multiple variables.
 *  If you specify a variable name, then that variable is deleted. If you
 *  specify a prefix and `recursive` is true, then all variables with that
 *  prefix are deleted. You must set a `recursive` to true if you delete
 *  variables by prefix.
 *
 *  Method: runtimeconfig.projects.configs.variables.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesDelete : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsVariablesDeleteWithname:]

/**
 *  The name of the variable to delete, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/variables/[VARIABLE_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Set to `true` to recursively delete multiple variables with the same
 *  prefix.
 */
@property(assign) BOOL recursive;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Empty.
 *
 *  Deletes a variable or multiple variables.
 *  If you specify a variable name, then that variable is deleted. If you
 *  specify a prefix and `recursive` is true, then all variables with that
 *  prefix are deleted. You must set a `recursive` to true if you delete
 *  variables by prefix.
 *
 *  @param name The name of the variable to delete, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/variables/[VARIABLE_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a single variable.
 *
 *  Method: runtimeconfig.projects.configs.variables.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesGet : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsVariablesGetWithname:]

/**
 *  The name of the variable to return, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/variables/[VARIBLE_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Variable.
 *
 *  Gets information about a single variable.
 *
 *  @param name The name of the variable to return, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/variables/[VARIBLE_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists variables within given a configuration, matching any provided filters.
 *  This only lists variable names, not the values.
 *
 *  Method: runtimeconfig.projects.configs.variables.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesList : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsVariablesListWithparent:]

/**
 *  Filters variables by matching the specified filter. For example:
 *  `projects/example-project/config/[CONFIG_NAME]/variables/example-variable`.
 */
@property(copy, nullable) NSString *filter;

/**
 *  Specifies the number of results to return per page. If there are fewer
 *  elements than the specified number, returns all elements.
 */
@property(assign) NSInteger pageSize;

/**
 *  Specifies a page token to use. Set `pageToken` to a `nextPageToken`
 *  returned by a previous list request to get the next page of results.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  The path to the RuntimeConfig resource for which you want to list variables.
 *  The configuration must exist beforehand; the path must by in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_ListVariablesResponse.
 *
 *  Lists variables within given a configuration, matching any provided filters.
 *  This only lists variable names, not the values.
 *
 *  @param parent The path to the RuntimeConfig resource for which you want to
 *    list variables.
 *    The configuration must exist beforehand; the path must by in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates an existing variable with a new value.
 *
 *  Method: runtimeconfig.projects.configs.variables.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesUpdate : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsVariablesUpdateWithObject:name:]

/**
 *  The name of the variable to update, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/variables/[VARIABLE_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Variable.
 *
 *  Updates an existing variable with a new value.
 *
 *  @param object The @c GTLRCloudRuntimeConfig_Variable to include in the
 *    query.
 *  @param name The name of the variable to update, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/variables/[VARIABLE_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesUpdate
 */
+ (instancetype)queryWithObject:(GTLRCloudRuntimeConfig_Variable *)object
                           name:(NSString *)name;

@end

/**
 *  Watches a specific variable and waits for a change in the variable's value.
 *  When there is a change, this method returns the new value or times out.
 *  If a variable is deleted while being watched, the `variableState` state is
 *  set to `DELETED` and the method returns the last known variable `value`.
 *  If you set the deadline for watching to a larger value than internal timeout
 *  (60 seconds), the current variable value is returned and the `variableState`
 *  will be `VARIABLE_STATE_UNSPECIFIED`.
 *  To learn more about creating a watcher, read the
 *  [Watching a Variable for
 *  Changes](/deployment-manager/runtime-configurator/watching-a-variable)
 *  documentation.
 *
 *  Method: runtimeconfig.projects.configs.variables.watch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesWatch : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsVariablesWatchWithObject:name:]

/**
 *  The name of the variable to watch, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Variable.
 *
 *  Watches a specific variable and waits for a change in the variable's value.
 *  When there is a change, this method returns the new value or times out.
 *  If a variable is deleted while being watched, the `variableState` state is
 *  set to `DELETED` and the method returns the last known variable `value`.
 *  If you set the deadline for watching to a larger value than internal timeout
 *  (60 seconds), the current variable value is returned and the `variableState`
 *  will be `VARIABLE_STATE_UNSPECIFIED`.
 *  To learn more about creating a watcher, read the
 *  [Watching a Variable for
 *  Changes](/deployment-manager/runtime-configurator/watching-a-variable)
 *  documentation.
 *
 *  @param object The @c GTLRCloudRuntimeConfig_WatchVariableRequest to include
 *    in the query.
 *  @param name The name of the variable to watch, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsVariablesWatch
 */
+ (instancetype)queryWithObject:(GTLRCloudRuntimeConfig_WatchVariableRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a Waiter resource. This operation returns a long-running Operation
 *  resource which can be polled for completion. However, a waiter with the
 *  given name will exist (and can be retrieved) prior to the operation
 *  completing. If the operation fails, the failed Waiter resource will
 *  still exist and must be deleted prior to subsequent creation attempts.
 *
 *  Method: runtimeconfig.projects.configs.waiters.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersCreate : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsWaitersCreateWithObject:parent:]

/**
 *  The path to the configuration that will own the waiter.
 *  The configuration must exist beforehand; the path must by in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`.
 */
@property(copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Operation.
 *
 *  Creates a Waiter resource. This operation returns a long-running Operation
 *  resource which can be polled for completion. However, a waiter with the
 *  given name will exist (and can be retrieved) prior to the operation
 *  completing. If the operation fails, the failed Waiter resource will
 *  still exist and must be deleted prior to subsequent creation attempts.
 *
 *  @param object The @c GTLRCloudRuntimeConfig_Waiter to include in the query.
 *  @param parent The path to the configuration that will own the waiter.
 *    The configuration must exist beforehand; the path must by in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`.
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudRuntimeConfig_Waiter *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes the waiter with the specified name.
 *
 *  Method: runtimeconfig.projects.configs.waiters.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersDelete : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsWaitersDeleteWithname:]

/**
 *  The Waiter resource to delete, in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/waiters/[WAITER_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Empty.
 *
 *  Deletes the waiter with the specified name.
 *
 *  @param name The Waiter resource to delete, in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/waiters/[WAITER_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a single waiter.
 *
 *  Method: runtimeconfig.projects.configs.waiters.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersGet : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsWaitersGetWithname:]

/**
 *  The fully-qualified name of the Waiter resource object to retrieve, in the
 *  format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/waiters/[WAITER_NAME]`
 */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_Waiter.
 *
 *  Gets information about a single waiter.
 *
 *  @param name The fully-qualified name of the Waiter resource object to
 *    retrieve, in the
 *    format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]/waiters/[WAITER_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List waiters within the given configuration.
 *
 *  Method: runtimeconfig.projects.configs.waiters.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudPlatform
 *    @c kGTLRAuthScopeCloudRuntimeConfigCloudruntimeconfig
 */
@interface GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersList : GTLRCloudRuntimeConfigQuery
// Previous library name was
//   +[GTLQueryCloudRuntimeConfig queryForProjectsConfigsWaitersListWithparent:]

/**
 *  Specifies the number of results to return per page. If there are fewer
 *  elements than the specified number, returns all elements.
 */
@property(assign) NSInteger pageSize;

/**
 *  Specifies a page token to use. Set `pageToken` to a `nextPageToken`
 *  returned by a previous list request to get the next page of results.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  The path to the configuration for which you want to get a list of waiters.
 *  The configuration must exist beforehand; the path must by in the format:
 *  `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 */
@property(copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudRuntimeConfig_ListWaitersResponse.
 *
 *  List waiters within the given configuration.
 *
 *  @param parent The path to the configuration for which you want to get a list
 *    of waiters.
 *    The configuration must exist beforehand; the path must by in the format:
 *    `projects/[PROJECT_ID]/configs/[CONFIG_NAME]`
 *
 *  @returns GTLRCloudRuntimeConfigQuery_ProjectsConfigsWaitersList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END
