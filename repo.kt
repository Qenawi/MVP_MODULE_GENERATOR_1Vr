interface  ${RepoName}Repo {
    fun doWork(params: ${UseCaseName}UseCase.Params): Either<Failure, ${Response}>

    class NetWork @Inject constructor(
        val service: RetrofitService,
        val network: NetworkHandler
    ) :  ${RepoName}Repo {
        override fun doWork(params: ${UseCaseName}UseCase.Params): Either<Failure, ${Response}> {
        return   when (network.isConnected) {
                false, null -> Either.Left(Failure.NetworkConnection)
                else -> {
                     request(
                        service.__(params.toHashMap()),
                        {j-> j.mMapToObject()},
                        {v-> v.validateType()},
                        _____()
                    )
                }
            } //when
        }
    }
}