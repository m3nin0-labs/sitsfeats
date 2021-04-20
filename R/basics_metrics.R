#' @title Basics metrics
#'
#' @name basics_metrics
#'
#' @description
#' The \code{max_ts()} retrieves the maximum value contained in the time series
#' The \code{min_ts()} retrieves the minimum value contained in the time series
#' The \code{mean_ts()} retrieves the mean value of the time series
#' The \code{median_ts()} retrieves the median value of the time series
#' The \code{sum_ts()} retrieves the sum of all time series points
#' The \code{std_ts()} retrieves the standard deviation of the time series
#' The \code{skew_ts()} retrieves the skewness of the time series
#' The \code{kurt_ts()} retrieves the kurtosis of the time series
#' The \code{amplitude_ts()} retrieves the amplitude of the time series
#' The \code{fslope_ts()} retrieves the first slope of the time series
#' The \code{abs_sum_ts()} retrieves the absolute sum of the time series points
#' The \code{amd_ts()} retrieves the absolute mean of the difference between
#'  each point in the time series
#' The \code{mse_ts()} retrieves the mean spectral energy of the time series
#' The \code{fqr_ts()} retrieves the value of the first quartile of the time
#'  series (0.25)
#' The \code{sqr_ts()} retrieves the value of the second quartile of the time
#'  series (0.50)
#' The \code{tqr_ts()} retrieves the value of the third quartile of the time
#'  series (0.75)
#' The \code{iqr_ts()} retrieves the interquartile range (difference between the
#'  third and first quartile)
#'
#'
#' @param timeseries   a \code{numeric} or \code{matrix} object where the
#'  columns is the point in time.
#'
#' @return a \code{numeric} vector for each metric in each time series
#'
#' @export
max_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(max_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
min_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(min_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
mean_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(mean_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
median_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(median_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
sum_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(sum_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
std_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(std_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
skew_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(skew_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
kurt_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(kurt_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
amplitude_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(amplitude_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
fslope_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(fslope_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
abs_sum_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(abs_sum_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
amd_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(amd_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
mse_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(mse_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
fqr_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(fqr_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
sqr_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(sqr_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
tqr_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(tqr_calc(timeseries))
}

#' @rdname basics_metrics
#' @export
iqr_ts <- function(timeseries) {

  # assert that only supported types are provided
  timeseries <- .verify_timeseries(timeseries)

  as.numeric(iqr_calc(timeseries))
}